from setuptools import find_packages
from setuptools import setup

setup(
    name='arduino_firmware',
    version='0.0.0',
    packages=find_packages(
        include=('arduino_firmware', 'arduino_firmware.*')),
)
