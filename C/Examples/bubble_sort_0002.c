/*************************************************************************
    > File Name: bubble_sort_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

void bubbleingSort(int arr[], int n)
{
	int i,j,temp;
	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < n - i - 1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int arr[10] = {
		5,2,3,8,1,2,6,9,3,7
	};
	bubbleingSort(arr,10);
	for(i = 0; i < 10; ++i)
		printf("%d ",arr[i]);
	return 0;
}
