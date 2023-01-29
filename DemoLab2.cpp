#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool isOperator(char s)
{
    if(s == '=' || s == '+' || s == '-' || s == '*' || s == '/'|| s == '^'|| s == '>'|| s == '<')
        return true;
    return false;
}
bool isValid(string str, int n)
{
	// If first character is invalid
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_')
        )
		return false;
	// Traverse the string for the rest of the characters
	for (int i = 1; i<n; i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
            || isOperator(str[i])
			|| str[i] == '_'||str[i]==' ' || str[i]==';'))
			return false;
	}
	// String is a valid identifier
	return true;
}
int main()
{
    char s[1000];
    gets(s);
    int l = strlen(s);
    int k = 1;
    bool digitStart = true;
    bool variableStart = true;
    if(isValid(s,l)){
        if(s[l-1] == ';')
            {
        for(int i=0;i<l;i++){
            if(isOperator(s[i])){
                cout<<")"<<"("<<s[i]<<")";
                digitStart = true;
                variableStart = true;
            }
            else if(isdigit(s[i])){
                if(digitStart){
                    cout<<"(";
                    digitStart = false;
                }
                cout<<s[i];
            }
            else{
                if(s[i]!=' ' && s[i]!=';'){
                    if(variableStart){
                        cout<<"(id, "<<k;
                        k++;
                        variableStart = false;
                    }
                }
            }
        }
        cout<<")";
    }
        else{
            cout<<"give a valod expression like Aka=t+9;"<<endl;
            cout<<" ; is a must";
        }
    }
    else{
        cout<<"Statement is not valid!!! ";
    }
    return 0;
}
