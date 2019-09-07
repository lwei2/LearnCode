/*************************************************************************
    > File Name: C_QuickSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef __QUICK_SORT_H_
#define __QUICK_SORT_H_

#include <stdio.h>

void qsort(int *a, int left, int right)
{
	if(left >= right)
		return;
	int i = left;
	int j = right;
	int key = a[left];
	while(i < j)
	{
		while(i < j && key <= a[j])
		{
			j--;
		}
		a[i] = a[j];
		while(i < j &&key >= a[i])
		{
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	sort(a,left, i - 1);
	sort(a, i + 1, right);
}


#endif
