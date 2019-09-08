/*************************************************************************
    > File Name: C_InsertSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _INSERT_SORT_H_
#define _INSERT_SORT_H_

#include <stdio.h>

#if 
void InsertSort(int a[], int len)
{
	for(int i = 0; i < len; i++)
	{
		int j = i - 1;
		int tmp = a[i];
		while(j >= 0 && tmp < a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
}
#elif
void InsertSort(int a[], int first, int last)
{
	int i,j;
	int tmp;
	for(i = first + 1; i < last; i++)
	{
		tmp = a[i];
		j = i - 1;
		while((j >= 0) && a[j] > tmp)
		{
			a[j+1] = a[j];
			j--;
		}
		if(j != i - 1)
			a[j+1] = tmp;
	}
}

#else
void InsertSort(int *a, unsigned int n)
{
	int i,j;
	int tmp;
	for(i = 1; i < n; i++)
	{
		tmp = *(a+i);
		for(j = i; j > 0 &&*(a+j-1)> tmp; j--)
		{
			*(a+j) = *(a+j-1);
		}
		*(a+j) = tmp;
	}
}

#endif

#endif
