# emparser
Extended Mizar parser

## Development
### antlr4
  * We assume developers use vscode and its extension "ANTLR4 grammar syntax support".
  * Oen folder "${project_root}/emparser/antlr" with vscode
  * Touch "mizar.g4", then antlr4 processing will start and generate Mizar*.py in the folder.

## Test
> pytest tests                          # test all  
> pytest -q tests                       # test all quietly  
> pytest tests/test_mainprocess.py      # test only one file  
> pytest -m tests 'not slow'            # test except 'slow' marked cases  
