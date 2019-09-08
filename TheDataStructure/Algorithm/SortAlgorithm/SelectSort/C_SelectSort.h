/*************************************************************************
    > File Name: C_SelectSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _SELECT_SORT_H_
#define _SELECT_SORT_H_

void SelectSort(int a[], int len)
{
	int i,j;
	int min, tmp;
	for(i = 0; i < len; i++)
	{
		min = i;
		for(j = i + 1; j < len; j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		if(min != i)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
}

#endif
