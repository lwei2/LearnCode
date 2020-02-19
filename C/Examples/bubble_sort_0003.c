/*************************************************************************
    > File Name: bubble_sort_0003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
	int flag = 0;
	int i,j, temp;
	for(i = 0; i < n; ++i)
	{
		flag = 0;
		for(j = 0; j < n - i - 1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		if(flag == 0)
			break;
	}
}
int main(void)
{
	int i;
	int arr[10] = {
		5,2,3,8,1,2,6,9,3,7
	};
	bubbleSort(arr,10);
	for(i = 0; i < 10; ++i)
		printf("%d ",arr[i]);
	return 0;
}
