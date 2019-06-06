/*************************************************************************
    > File Name: Pro1027.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(void)
{
	int n,m;
	int num[1005];
	while(cin>>n>>m)
	{
		memset(num,0,sizeof(num));
		for(int i = 1; i <= n; i++)
			num[i] = i;
		m--;
		while(m--)
		{
			next_permutation(num+1, num+n+1);
		}
		for(int i = 1; i <= n; i++)
		{
			if(i == 1)
				cout<<num[i];
			else
				cout<<" "<<num[i];
		}
		cout<<endl;		
	}
	return 0;
}
