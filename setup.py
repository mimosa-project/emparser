# -*- coding: utf-8 -*-

import sys
import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name = "emparser",
    version = "0.0.1",
    author = "Kazuhisa Nakasho",
    author_email = "kazuhisa.nakasho@gmail.com",
    description = "Extended Mizar parser",
    long_description = long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/mimosa-project/emparser",
    packages = setuptools.find_packages('src'),
    package_dir = {'': 'src'},
    package_data = {'emparser': ['data/*.vct']},
    include_package_data = True,
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: POSIX",
        "Development Status :: 2 - Pre-Alpha",
    ],
    python_requires='>=3',
    install_requires = ['lxml', 'antlr4-python3-runtime'],
    setup_requires = ['pytest-runner'],
    tests_require=['pytest'],
    extras_require={
        'dev': [
            'pytest>=4',
            'wheel',
        ],
    },
)
