/*************************************************************************
    > File Name: Pro0129_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int find(int n)
{
	if(n < 1)
		return 0;
	if(n == 1)
		return 1;
	int pre = 1, cur = 1, tmp = 0;
	for(int i = 2; i < n + 1; i++)
	{
		tmp = cur;
		cur += pre;
		pre = tmp;
	}
	return cur;
}
int main(void)
{
	int n;
	cin>>n;
	printf("%d",find(n)%(int)pow(2,29));
	return 0;
}
