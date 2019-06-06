/*************************************************************************
    > File Name: Pro1019/Pro1019.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :Least Common Multiple
 ************************************************************************/

#include<iostream>

using namespace std;

int gcd(int x, int y)
{
	int t = 1;
	while(t>0)
	{
		t = x%y;
		x = y;
		y = t;
	}
	return x;
}
int gcd1(int a, int b)
{
	int t = 1;
	while(t!=0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}
#if 0
int main(void)
{
	int n,m,a;
	cin>>n;
	while(n--)
	{
		cin>>m;
		cin>>a;
		m--;
		while(m--)
		{
			int b;
			cin>>b;
			int k = gcd(a,b);
			a = b/k*a;
		}
		cout<<a<<endl;
	}
	return 0;
}

#else 
int main(void)
{
	int n;
	cin>>n;
	int k;
	int a,b;
	while(n--)
	{
		cin>>k;
		cin>>a;
		for(int i = 1; i < k; i++)
		{
			cin>>b;
			a = (a/gcd1(a,b))*b;
		}
		cout<<a<<endl;
	}
	return 0;
}
#endif
