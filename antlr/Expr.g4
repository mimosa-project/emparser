grammar Expr;		
//prog:	(expr NEWLINE)* ;
prog:	(expr)*;
expr:	expr ('*'|'/') expr
    |	expr ('+'|'-') expr
    |	INT
    |	'(' expr ')'
    ;
// NEWLINE : [\r\n]+ ;
INT     : [0-9]+ ;

WS : ('\r' | '\n' | '\t' | ' ') -> skip;
