// C++ implementation of the approach
#include <iostream>
#include<string.h>
#include <cstdio>

using namespace std;

// Function that returns true if str
// is a valid identifier

bool isValid(string str, int n)
{
    //str ="str = t+10";
	// If first character is invalid
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'
        ))
		return false;

	// Traverse the string for the rest of the characters
	for (int i = 1; i<n; i++)
    {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'|| str[i] == '$'|| str[i] == '#'|| str[i] == '='
            || str[i]=='+'|| str[i]=='-'|| str[i]=='*'|| str[i]=='/'))
			return false;
	}

	// String is a valid identifier
	return true;
}





void tokenize(string str)
{
    //str break down
    cout << "tokenize" << endl;
    string A;
    int i;
    int n=str.length();
    cout<<"(";
    for(i=0;i<n;i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))

           if(str[i+1] == '_'|| str[i+1] == '$'|| str[i+1] == '#'|| str[i+1] == '='
            || str[i+1]=='+'|| str[i+1]=='-'|| str[i+1]=='*'|| str[i+1]=='/')
            {
                cout<<str[i];

            }


    }
}



// Driver code
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
	int n = str.length();

	if (isValid(str, n))
    {

        cout << "Valid"<<endl;
        tokenize(str);
    }
	else
		cout << "Invalid"<<endl;


	return 0;
}
