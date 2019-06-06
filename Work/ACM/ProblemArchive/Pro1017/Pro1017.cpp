/*************************************************************************
    > File Name: Pro1017.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	int T;
	int n,m;
	int count = 0, num = 0;
	cin>>T;
	while(T--)
	{
		while(cin>>n>>m&&n!=0)
		{
			int a,b;
			for(a = 1; a < 100; ++a)
			{
				for(b = a+1; b < n; ++b)
				{
					if((a*a+b*b+m)%(a*b) == 0)
						count++;
				}
			}
			cout<<"Case "<<++num<<": "<<count<<endl;
			count = 0;
		}
		num = 0;
		if(T)
			cout<<endl;
	}
	return 0;
}
