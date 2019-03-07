# emparser
Extended Mizar parser

## test
### test all
> pytest tests

### test all quietly
> pytest -q tests  

### test only one file
> pytest tests/test_mainprocess.py  

### test except 'slow' marked cases
> pytest -m tests 'not slow'
