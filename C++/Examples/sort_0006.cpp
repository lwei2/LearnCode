/*************************************************************************
    > File Name: sort_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a[10] = {
		8,7,5,3,2,1,0,9,10,12
	};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	sort(a,a+10, less<int>());
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<'\t';
	cout<<endl;

	return 0;
}
