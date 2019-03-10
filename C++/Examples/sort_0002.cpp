/*************************************************************************
    > File Name: sort_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a>b;
}
int main(void)
{
	int a[10] = {
		20,2,3,5,16,9,10,11,1,14
	};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a,a+10,cmp);
	for(int i = 0; i < 10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
