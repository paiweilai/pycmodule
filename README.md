# pycmodule
#### A python-c extension module example

## About

`pycmodule` is a python-c extension module that shows how to create
python module written in C.

## Build

    python setup.py build

## Example

    import pycmodule
    
    pycmodule.hello_world()

## Notes

Make sure the path is correctly set.

    export PYTHONPATH=`pwd`/build/...
