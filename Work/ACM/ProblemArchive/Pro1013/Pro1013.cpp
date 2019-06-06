/*************************************************************************
    > File Name: Pro1013.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;


int main(void)
{
	int i, n = 0;
	char str[1000];
	while(cin>>str)
	{
		if(strcmp(str,"0") == 0)
			break;
		for(i = 0; i < strlen(str); i++)
			n = n + str[i] - 48;
		while(n > 9)
			n = n%9;
		if(n == 0)
			cout<<9<<endl;
		else
			cout<<n<<endl;
		n = 0;
	}
	return 0;
}
