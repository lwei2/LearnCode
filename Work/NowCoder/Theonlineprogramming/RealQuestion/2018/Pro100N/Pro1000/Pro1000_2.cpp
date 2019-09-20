/*************************************************************************
    > File Name: Pro1000_2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	string input;
	cin>>input;
	stringstream ss(input);
	stack<string> st;
	string tmp;
	while(getline(ss,tmp,'/'))
	{
		if(tmp == "." || tmp == "")
			continue;
		else if(tmp == "..")
		{
			if(!st.empty())
			{
				st.pop();
			}
		}
		else 
			st.push(tmp);
	}
	string res = "";
	if(st.empty())
	{
		cout<<"/"<<endl;
		return 0;
	}
	while(!st.empty())
	{
		res = st.top() + res;
		res = "/" + res;
		st.pop();
	}
	cout<<res<<endl;
	return 0;
}
