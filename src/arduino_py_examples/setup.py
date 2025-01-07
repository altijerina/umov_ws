import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'arduino_py_examples'

setup(
    name=package_name,
    version='0.0.0',
    # packages=find_packages(exclude=['test']),
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.py')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='albert',
    maintainer_email='135473626+altijerina@users.noreply.github.com',
    description='TODO: Package description',
    license='Apache 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher = arduino_py_examples.simple_publisher:main',
            'simple_subscriber =  arduino_py_examples.simple_subscriber:main',
            'simple_parameter = arduino_py_examples.simple_parameter:main',
            'simple_service_server = arduino_py_examples.simple_service_server:main',
            'simple_service_client = arduino_py_examples.simple_service_client:main',
            "simple_action_server = arduino_py_examples.simple_action_server:main",
            "simple_action_client = arduino_py_examples.simple_action_client:main",
            "moveit_interface = arduino_py_examples.moveit_interface:main"
            "simple_lifecycle_node = arduino_py_examples.simple_acsimple_lifecycle_node:main",
        ],
    },
)
