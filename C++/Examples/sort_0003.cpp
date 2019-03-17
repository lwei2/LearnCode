/*************************************************************************
    > File Name: sort_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int a[10] = {
		7,2,3,5,8,9,10,11,15,1
	};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a,a+10,less<int>());
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}
