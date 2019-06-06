/*************************************************************************
    > File Name: Pro1021.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

#if 1
/*int fun(int n)
{
	if(n == 0)
		return 7;
	else if(n == 1)
		return 11;
	else
		return fun(n-1)+fun(n-2);
}

int main(void)
{
	int num;
	while(cin>>num)
	{
		if(fun(num) == 0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
} */
#else 1
int fab[1000005];
int main(void)
{
	int n;
	fab[0] = 7;
	fab[1] = 11;
	for(int i = 2; i < 1000000; i++)
		fab[i] = (fab[i-1]%3+fab[i-2]%3)%3;
	while(cin>>n)
	{
		if(fab[n] == 0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
#endif
