/*************************************************************************
    > File Name: SelectSort_0001.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef _SELECT_SORT_H
#define _SELECT_SORT_H

#include <iostream>

using namespace std;

void SelectSort(int *a, int n)
{
	register int i,j,min,t;
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
			if(a[min] > a[j])
				min = j;
		if(min != i)
		{
			t = a[min];
			a[min] = a[i];
			a[i] = t;
		}
	}
}


#endif
