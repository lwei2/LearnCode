/*************************************************************************
    > File Name: Pro1057_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool iscomp(string s)
{
	stack<char> st;
	for(auto i : s)
	{
		if(i == '[' || i == '(')
			st.push(i);
		else if(i == ')')
		{
			if(!st.empty() && st.top() == '(')
			{
				st.pop();
				continue;
			}
			else
				return false;
		}
		else if(i == ']')
		{
			if(!st.empty() && st.top() == '[')
			{
				st.pop();
				continue;
			}
			else
				return false;
		}
	}
	return true;
}

int main(void)
{
	string str;
	cin>>str;
	bool res = iscomp(str);
	if(res)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}
