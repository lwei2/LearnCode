/*************************************************************************
    > File Name: Pro1018.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	//斯特林公式：lnN!=NlnN-N+0.5*ln(2*N*pi)
 ************************************************************************/

#include<iostream>
#include<math.h>

#define PI 3.141592653

using namespace std;
/*
int fun(int n)
{
	if(n == 0)
		return 1;
	else 
		return n*fun(n-1);
}*/

void fun(int n)
{
	double tmp;
	tmp = (n *log(n) - n + 0.5*log(2*n*PI))/log(10);
	int result = (int)tmp+ 1;
	cout<<result<<endl;
}

int main(void)
{
	int n;
	int num;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>num;
		fun(num);
	}
	return 0;
}
