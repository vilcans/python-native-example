from distutils.core import setup, Extension

module = Extension('advancedmath', sources=['advancedmath.c'])

setup(
    name='advancedmath',
    version='1.0',
    description='Really advanced mathematics module',
    ext_modules=[module]
)
