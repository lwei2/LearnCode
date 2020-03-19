/*************************************************************************
    > File Name: Pro1058_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	string str;
	cin>>str;
	stack<char> cStack;
	for(auto c : str)
	{
		if(c == '-')
			cout<<'-';
		else
			cStack.push(c);
	}
	int len = cStack.size();
	for(int i = 0; i < len; i++)
	{
		cout<<cStack.top();
		cStack.pop();
	}
	cout<<endl;
	return 0;
}
