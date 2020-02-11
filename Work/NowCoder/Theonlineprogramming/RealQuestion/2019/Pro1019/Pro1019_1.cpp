/*************************************************************************
    > File Name: Pro1019_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void fun(long long num[])
{
	for(int i = 1; i <= 1000; ++i)
	{
		long long tmp = 0;
		for(int j = 1; j <= i; j *= 2)
		{
			tmp += num[i-j];
			tmp = tmp%(1000000000+3);
		}
		num[i] = tmp;
	}
}

int main(void)
{
	long long num[1001] = {0};
	num[0] = 1;
	fun(num);
	int N,M;
	cin>>M;
	while(M--)
	{
		cin>>N;
		cout<<num[N]<<endl;
	}
	return 0;
}
