from distutils.core import setup, Extension

setup(
    ext_modules = [ Extension("pycmodule", sources = ["pycmodule.c"]), ],
)
