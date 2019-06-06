/*************************************************************************
    > File Name: Pro1004_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	int n;
	char a[1000][15];
	innt b[1000];
	while(cin>>n)
	{
		if(n == 0)
			break;
		for(int i = 1; i <= n; i++)
			cin>>a[i];
		for(int i = 1; i <= n; i++)
		{
			b[i] = 0;
			for(int j = i; j <= n; j++)
			{
				if(strcmp(a[i],a[j]) == 0)
					b[i]++;
			}
		}
		int max = b[1];
		int k = 1;
		for(int i = 1; i <= n; i++)
		{
			if(b[i] > max)
			{
				max = b[i];
				k = i;
			}
		}
		cout<<a[k]<<endl;
	}
	return 0;
}
