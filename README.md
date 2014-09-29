pycmodule
=========

Python-C Extension Module Practice

- To compile module
>> python setup.py build

- To use module
>> python
>> import pycmodule
>> pycmodule.hello_world()
"Hello world!"

Note:
Make sure that the module path is correctly set.

export PYTHONPATH=`pwd`/build/[xxx]
