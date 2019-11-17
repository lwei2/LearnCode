/*************************************************************************
    > File Name: 1-2.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void Reverse(DataType a[], int n)
{
	int i, m = n/2;
	DataType tmp;
	for(i = 0; i < m; i++)
	{
		tmp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = tmp;
	}
}
