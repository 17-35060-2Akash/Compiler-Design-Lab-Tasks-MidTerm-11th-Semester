#include<stdio.h>
#include<conio.h>

/*Input:   X = a+b*10;*/
/*(Console)
 (id,1)(=)(id,2)(+)(id,3)(*)(10)*/

void main()
{
    char s[8];
     printf("\n Enter The Expression: ");
        int a;
        for(a=0;a<8;a++)
        {
        gets(s[a]);
        }

     int i;
    for(i=0;i<8;i++)
    { int j=1;


    switch(s[i])
    {
        case'>':
            if(s[i]=='>')
                printf("(>)");
                break;
        case'<':
            if(s[i]=='<')
                printf("(<)");
                break;
        case'=':
            if(s[i]=='=')
                printf("(=)");
                break;
        case'!':
            if(s[i]=='!')
                printf("(!)");
                break;
        case'&':
            if(s[i]=='&')
                printf("(&)");
                break;
        case'|':
            if(s[i]=='|')
                printf("(|)");
                break;
        case'+':
            if(s[i]=='+')
                printf("(+)");
                break;
        case'-':
            if(s[i]=='-')
                printf("(-)");
                break;
        case'*':
            if(s[i]=='*')
                printf("(*)");
                break;
        case'/':
            if(s[i]=='/')
                printf("(/)");
                break;
        case'%':
            if(s[i]=='%')
                printf("(%)");
                break;
        case 'a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z':
             if(s[i]=='a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z')
                printf("(id,%d)",j);
             j++;
             break;
         case '0|1|2|3|4|5|6|7|8|9|10':
             if(s[i]=='0|1|2|3|4|5|6|7|8|9|10')

                /*printf("Character is %c \n", ch);*/
        default:
            printf("\n Not a operator");

     }
     getch();
    }

}

