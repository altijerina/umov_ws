#include <arduino_controller/arduino_interface.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <pluginlib/class_list_macros.hpp>

namespace arduino_controller
{

std::string compensateZeros(int value)
{
    std::string compensate_zeros = "";
    if (value < 10)
    {
        compensate_zeros = "00";
    } 
    else if(value<100)
    {
        compensate_zeros = "0";
    } 
    else 
    {
        compensate_zeros = "";
    }

    return compensate_zeros;
}

ArduinoInterface::ArduinoInterface()
{
    
}

ArduinoInterface::~ArduinoInterface()
{
    if (arduino_.IsOpen())
    {
        try
        {
        arduino_.Close();
        }
        catch (...)
        {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("ArduinoInterface"),
                          "Something went wrong while closing connection with port: " << port_);
        }
    }
}

CallbackReturn ArduinoInterface::on_init(const hardware_interface::HardwareInfo &hardware_info)
{
    CallbackReturn result = hardware_interface::SystemInterface::on_init(hardware_info);

    if (result != CallbackReturn::SUCCESS)
    {
        return result;
    }

    try
    {
        port_ = info_.hardware_parameters.at("port");
    }
    catch(const std::out_of_range &e)
    {
        RCLCPP_FATAL(rclcpp::get_logger("ArduinoInterface"), "No Serial Port provided! Aborting");
        return CallbackReturn::FAILURE;
    }

    position_commands_.reserve(info_.joints.size());
    position_states_.reserve(info_.joints.size());
    prev_position_commands_.reserve(info_.joints.size());

    return CallbackReturn::SUCCESS;
}


std::vector<hardware_interface::StateInterface> ArduinoInterface::export_state_interfaces()
{
    std::vector<hardware_interface::StateInterface> state_interfaces;
    for(size_t i = 0; i < info_.joints.size(); i++)
    {
        state_interfaces.emplace_back(hardware_interface::
                StateInterface(info_.joints[i].name, hardware_interface::HW_IF_POSITION, &position_states_[i]));
    }

    return state_interfaces;
}

std::vector<hardware_interface::CommandInterface> ArduinoInterface::export_command_interfaces()
{
    std::vector<hardware_interface::CommandInterface> command_interfaces;
    for (size_t i = 0; i < info_.joints.size(); i++)
    {
        command_interfaces.emplace_back(hardware_interface::
                CommandInterface(info_.joints[i].name, hardware_interface::HW_IF_POSITION, & position_commands_[i]));        
    }

    return command_interfaces;

}

CallbackReturn ArduinoInterface::on_activate(const rclcpp_lifecycle::State & previous_state)
{
    RCLCPP_INFO(rclcpp::get_logger("ArduinoInterface"), "Starting the robot hardware.");
    position_commands_ = {0.0, 0.0, 0.0, 0.0, 0.0};
    prev_position_commands_ = {0.0, 0.0, 0.0, 0.0, 0.0};
    position_states_ = {0.0, 0.0, 0.0, 0.0, 0.0};

    try
    {
        arduino_.Open(port_);
        arduino_.SetBaudRate(LibSerial::BaudRate::BAUD_115200);
    }
    catch(...)
    {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("ArduinoInterface"), "Something went wrong while interacting with the port: " << port_);
        return CallbackReturn::FAILURE;
    }

    RCLCPP_INFO(rclcpp::get_logger("ArduinoInterface"), "Hardware started, ready to take commands.");
    return CallbackReturn::SUCCESS;
}

CallbackReturn ArduinoInterface::on_deactivate(const rclcpp_lifecycle::State & previous_state)
{
    RCLCPP_INFO(rclcpp::get_logger("ArduinoInterface"), "Deactivating the robot hardware.");
    if(arduino_.IsOpen())
    {
        try
        {
            arduino_.Close();
        }
        catch(...)
        {
            RCLCPP_FATAL_STREAM(rclcpp::get_logger("ArduinoInterface"), "Something went wrong while closing connection with the port: " << port_);
            return CallbackReturn::FAILURE;
        }
        
    }

    RCLCPP_INFO(rclcpp::get_logger("ArduinoInterface"), "Hardware stopped.");
    return CallbackReturn::SUCCESS;        
}

hardware_interface::return_type ArduinoInterface::read(const rclcpp::Time &time, const rclcpp::Duration &period)
{
    position_states_ = position_commands_;
    return hardware_interface::return_type::OK;
}


hardware_interface::return_type ArduinoInterface::write(const rclcpp::Time &time, const rclcpp::Duration &period)
{
    if(position_commands_ == prev_position_commands_)
    {
        return hardware_interface::return_type::OK;
    }

    std::string msg;
    // int base = static_cast<int>(((position_commands_.at(0) + (M_PI/2)) * 180) / M_PI);
    int base = static_cast<int>((position_commands_.at(0) * 180) / M_PI);
    msg.append("b");
    msg.append(compensateZeros(base));
    msg.append(std::to_string(base));
    msg.append(",");
    // int shoulder = 180 - static_cast<int>((((position_commands_.at(1)) + (M_PI/2)) * 180) / M_PI);
    int shoulder = 180 - static_cast<int>((position_commands_.at(1) * 180) / M_PI);
    msg.append("s");
    msg.append(compensateZeros(shoulder));
    msg.append(std::to_string(shoulder));
    msg.append(",");
    // int elbow = 180 - static_cast<int>((((position_commands_.at(2)) + (M_PI/2)) * 180) / M_PI);
    int elbow = 180 - static_cast<int>((position_commands_.at(2) * 180) / M_PI);
    msg.append("e");
    msg.append(compensateZeros(elbow));
    msg.append(std::to_string(elbow));
    msg.append(",");    
    // int wrist = 180 - static_cast<int>((((position_commands_.at(3)) + (M_PI/2)) * 180) / M_PI);
    int wrist = 180 - static_cast<int>((position_commands_.at(3) * 180) / M_PI);
    msg.append("w");
    msg.append(compensateZeros(wrist));
    msg.append(std::to_string(wrist));
    msg.append(",");       
    int gripper = 180 - static_cast<int>((-position_commands_.at(4) * 180) / (M_PI/2));
    msg.append("g");
    msg.append(compensateZeros(gripper));
    msg.append(std::to_string(gripper));
    msg.append(",");      
    try
    {
        RCLCPP_INFO_STREAM(rclcpp::get_logger("ArduinoInterface"), "Sending new command " << msg);
        arduino_.Write(msg);
    }        
    catch(...)
    {
        RCLCPP_ERROR_STREAM(rclcpp::get_logger("ArduinoInterface"), "Something went wrong while sending the message " << msg 
                                                << " to the port: " << port_) ;
        return hardware_interface::return_type::ERROR;
    }

    prev_position_commands_ = position_commands_;
    return hardware_interface::return_type::OK;

}  

} //namespace arduino_controller

PLUGINLIB_EXPORT_CLASS(arduino_controller::ArduinoInterface, hardware_interface::SystemInterface);