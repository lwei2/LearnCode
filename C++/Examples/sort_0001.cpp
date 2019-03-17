/*************************************************************************
    > File Name: sort_0001.cpp
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
		12,3,14,5,16,7,18,9,1,5
	};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	sort(a,a+10);
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
