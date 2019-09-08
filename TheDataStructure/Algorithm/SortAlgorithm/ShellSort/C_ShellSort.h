/*************************************************************************
    > File Name: C_ShellSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef _SHELL_SORT_H_
#define _SHELL_SORT_H_

#include <stdio.h>

void ShellSort(int a[], int len)
{
	int i,j,tmp;
	int gap = 0;
	while(gap <= len)
	{
		gap = 3*gap + 1;		
	}
	while(gap >= 1)
	{
		for(i = gap; i < len; i++)
		{
			j = i - gap;
			tmp = a[i];
			while(j >= 0 && a[j] > tmp)
			{
				a[j+gap] = a[j];
				j = j - gap;
			}
			a[j+gap] = tmp;
		}
		gap = (gap-1)/3;
	}
}
#endif
