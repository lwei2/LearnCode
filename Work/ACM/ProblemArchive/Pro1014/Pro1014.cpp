/*************************************************************************
    > File Name: Pro1014.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stdio.h>

using namespace std;

int zs(int step, int mod)
{
	if(mod == 0)
		return step;
	else
		zs(mod,step%mod);
}
int main(void)
{
	int step, mod;
	while(cin>>step>>mod)
	{
		if(zs(step,mod) == 1)
			printf("%10d%10d    Good Choice\n",step,mod);
		else
			printf("%10d%10d    Bad Choice\n",step,mod);
		cout<<endl;
	}	
	return 0;
}
