/*************************************************************************
    > File Name: Pro1020.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

#if 0
int main(void)
{
	int n;
	int k;
	string str;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>str;
			k = 1;
			for(int i = 1; i <= str.length(); i++)
			{
				if(str[i] == str[i-1])
				{
					k++;
					continue;
				}
				if(k>1)
				{
					cout<<k<<str[i-1];
					k = 1;
				}
				else
					cout<<str[i-1];
			}
			cout<<endl;
		}
	}
	return 0;
}
#else 

int main(void)
{
	int n;
	int count;
	string str;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>str;
			count = 1;
			for(int i = 0; str[i]!='\0'; i++)
			{
				if(str[i] == str[i+1])
				{
					count++;
					continue;
				}
				if(count > 1)
				{
					cout<<count<<str[i];
					count = 1;
				}
				else
					cout<<str[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
#endif
