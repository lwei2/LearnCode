/*************************************************************************
    > File Name: 1-6.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int Delete(int a[], int *n, int i)
{
	int j;
	for(i < 0 || i >= *n)
		return 0;
	for(j = i + 1; j < *n; j++)
		a[j-1] = a[j];
	(*n--);
	return 1; 
}
