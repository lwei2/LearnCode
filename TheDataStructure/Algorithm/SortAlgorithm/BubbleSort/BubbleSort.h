/*************************************************************************
    > File Name: BubbleSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef _BUBBLE_SORT_H_
#define _BUBBLE_SORT_H_

#include <iostream>

using namespace std;

void BubbleSort(int a[], int len)
{
	for(int i = 0; i < len; i++)
		for(int j = 0; j < len - i; j++)
		{
			if(a[i] > a[i+1])
			{
				int tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
			}
		}
}

#endif//
