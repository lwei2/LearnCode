/*************************************************************************
    > File Name: Pro1005_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	int i;
	int A, B;
	long int n;
	int f[53] = {0};
	while(cin>>A>>B>>n)
	{
		if(A == 0 && B == 0 && n == 0)
			break;
		if(n == 1 || n == 2)
		{
			cout<<'1'<<endl;
			continue;
		}
		f[1] = 1, f[2] = 1;
		A %= 7, B %= 7;
		for(int i = 3; i < 53; i++)
		{
			f[i] = (A*f[i-1] + B*f[i-2])%7;
			if(f[i] == 1 && f[i-1] == 1)
				break;
		}
		i -= 2;
		n %= i;
		f[0] = f[n];
		cout<<f[n]<<endl;
	}
	return 0;
}
