/*************************************************************************
    > File Name: C++_QuickSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef __QUICK_SORT_H_
#define __QUICK_SORT_H_

#include <iostream>
using namespace std;

#ifndef __METHOD_QUICKSORT1_
void QuickSort(int arr[], int low, int high)
{
	if(high <= low)
		return;
	int i = low;
	int j = high + 1;
	int key = arr[low];
	while(true)
	{
		while(arr[++i] < key)
		{
			if(i == high)
				break;
		}
		while(arr[--j] > key)
		{
			if(j == low)
				break;
		}
		if(i >= j)
			break;
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	int tmp = arr[low];
	arr[low] = arr[j];
	arr[j] = tmp;
	QuickSort(arr, low, j - 1);
	QuickSort(arr, j+1, high);
}
#elif

int Paritition(int A[], int low, int high)
{
	int pivot = A[low];
	while(low < high)
	{
		while(low < high && A[high] >= pivot)
			--high;
		while(low < high && A[low] <= pivot)
			++low;
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;
}

void QuickSort(int A[], int low, int high)
{
	if(low < high)
	{
		int pivot = Paritition(A, low, high);
		QuickSort(A, low, pivot - 1);
		QuickSort(A, pivot + 1, high);
	}
}

#else

#endif

#endif

