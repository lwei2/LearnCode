/*************************************************************************
    > File Name: Pro1022.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :Train Problem I
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;


int main(void)
{
	int n;
	char in[100];
	char out[100];
	int flag[100];
	while(cin>>n)
	{
		cin>>in;
		cin>>out;
		stack<char>s;
		int i = 0,j = 0;
		for(i;i<=n;)
		{
			if(s.empty())
			{
				s.push(in[i]);
				flag[i+j] = 0;
				i++;
			}
			if(!s.empty()&&s.top()!=out[j])
			{
				s.push(in[i]);
				flag[i+j] = 0;
				i++;
			}
			if(!s.empty() && s.top() == out[j])
			{
				s.pop();
				flag[i+j] = 1;
				j++;
			}
		}
		if(s.empty())
		{
			cout<<"Yes."<<endl;
			for(i = 0; i < 2*n; i++)
			{
				if(flag[i]!=1)
					cout<<"in"<<endl;
				else
					cout<<"out"<<endl;
			}
			cout<<"FINISH"<<endl;
		}
		else
		{
			cout<<"No."<<endl;
			cout<<"FINISH"<<endl;
		}
	}
	return 0;
}


