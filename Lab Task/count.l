/* Decalring two counters one for number  
of lines other for number of characters */
%{ 
int no_of_a = 0; 
int no_of_space = 0; 
%} 
  
%%
[a]		++no_of_a;
[ ]		++no_of_space;	
\n      return 0; 
%% 

int yywrap(){} 
int main(int argc, char **argv) 
{ 
  
yylex(); 
printf("number of a = %d, number of empty space = %d\n", 
       no_of_a, no_of_space); 
  
return 0; 
} 
