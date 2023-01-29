%% 
[-][0-9]+	{printf("Its A negetive number\n"); } 
[+][0-9]+    {printf("It an Positive number\n");}
[0-9]+			{printf("It an Positive number\n");}
.+				{printf("Not a valid number");}
\n    {return 0;} 
%% 
  
int yywrap(){} 
int main(){  
  
yylex(); 
  
return 0; 
} 
