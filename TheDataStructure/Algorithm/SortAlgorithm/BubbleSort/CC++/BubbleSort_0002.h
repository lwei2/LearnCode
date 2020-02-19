/*************************************************************************
    > File Name: BubbleSort_0002.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

#ifndef _BUBBLE_SORT_H_
#define _BUBBLE_SORT_H_


void BubbleSort(elemTye arr[], int len)
{
	elemTye tmp;
	for(int i = 0; i < len - 1; i++)
	{
		for(int j = 0; j < len - 1 - i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}


#endif
