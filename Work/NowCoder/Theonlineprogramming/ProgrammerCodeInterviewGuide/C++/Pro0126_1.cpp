/*************************************************************************
    > File Name: Pro0126_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	string str;
	stack<char> num;
	while(cin>>str)
	{
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] =='(')
				num.push(str[i]);
			else if(str[i] == ')')
			{
				if(!num.empty())
					num.pop();
				else
				{
					cout<<"NO"<<endl;
					return 0;
				}
			}
			else
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		if(num.empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
