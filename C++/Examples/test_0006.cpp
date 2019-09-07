/*************************************************************************
    > File Name: test_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void Qsort(int arr[], int low, int high)
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
	Qsort(arr, low, j - 1);
	Qsort(arr, j + 1, high);
}
int main(void)
{
	int a[] = {
		57, 68, 59, 52, 72, 28, 96, 33, 24
	};
	Qsort(a,0,sizeof(a)/sizeof(a[0]) - 1);
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
		cout<<a[i]<<" ";

	return 0;
}
