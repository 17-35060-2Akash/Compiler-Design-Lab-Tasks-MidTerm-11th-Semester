
%{ 
int i = 1;
char v  = '(';
char vi = ')';
%} 
  

%% 
[a-zA-z]+[0-9]*	{printf("%cid,%d",v,i++);}	
[-=+*/^><]		{printf("%c%c%s%c",vi,v,yytext,vi);};
[0-9]*			{printf("%c%s",v,yytext);}
\n      		return 0;
%% 

int yywrap(){} 
int main(){ 
  
yylex();
printf("%c",vi);
  
return 0; 
} 
