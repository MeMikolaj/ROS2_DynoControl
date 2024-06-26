from setuptools import find_packages
from setuptools import setup

setup(
    name='dyno_control',
    version='0.0.1',
    packages=find_packages(
        include=('dyno_control', 'dyno_control.*')),
)
