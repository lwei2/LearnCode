/*************************************************************************
    > File Name: sort_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;


int main(void)
{
	char a[10] = "asdfghjkl";
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	sort(a,a+10, greater<char>());
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	return 0;
}
