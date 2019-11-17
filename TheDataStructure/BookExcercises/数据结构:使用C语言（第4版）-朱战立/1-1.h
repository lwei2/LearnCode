/*************************************************************************
    > File Name: 1-1.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void Reverse(DataType a[], int n, DataType b[])
{
	int i;
	for(i = 0; i < n; i++)
	{
		b[i] = a[n-1-i];
	}
}
