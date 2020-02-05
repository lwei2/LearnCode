/*************************************************************************
    > File Name: Pro0148_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void number_process(vector<int> &a, int num, int k)
{
	int bitcount = 31;
	while(num)
	{
		int tmp = num%k;
		a[bitcount] = (a[bitcount] + tmp)%k;
		num /= k;
		bitcount--;
	}
}

int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	vector<int> res(32, 0);
	for(int i = 0; i < n; i++)
		number_process(res, arr[i], k);
	int number = 0;
	for(int i = 0; i < 32; i++)
		number = number*k + res[i];
	printf("%d\n",number);
	return 0;
}
