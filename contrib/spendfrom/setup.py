from distutils.core import setup
setup(name='5glspendfrom',
      version='1.0',
      description='Command-line utility for 5gl "coin control"',
      author='Gavin Andresen',
      author_email='gavin@5glfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
