/*************************************************************************
    > File Name: sort_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main(void)
{
	int a[10] = {
		9,6,3,8,5,2,7,4,1,0
	};
	for(int i = 0; i < 10; i++)
	{
		cout<<a[i]<<'\t';
	}
	cout<<endl;
	sort(a,a+10,compare);
	for(int j = 0;j < 10; j++)
	{
		cout<<a[j]<<'\t';
	}
	cout<<endl;
	return 0;
}
