# emparser
Extended Mizar parser

## Development
### Git clone
> git clone –recursive https://github.com/mimosa-project/emparser.git  

### Antlr4
  * We assume developers use vscode and its extension "ANTLR4 grammar syntax support".
  * Oen folder "${project_root}/emparser/antlr" with vscode
  * Touch "mizar.g4", then antlr4 processing will start and generate Mizar*.py in the folder.

### Setup
> pipenv install

### Test execution
> pipenv install --dev -e .  
> python setup.py test

### Test configuration
Configure [tool:pytest] section in setup.cfg  
For more details, see [pytest reference](https://docs.pytest.org/en/latest/reference.html).
> addopts = -q                              # test quietly  
> addopts = -m 'not slow'                   # test except 'slow' marked cases  
> python_files = tests/test_mainprocess.py  # test only one file  

### Packaging
> python setup.py sdist                 # ordinal distribution  
> python setup.py bdist_wheel           # wheel distribution

