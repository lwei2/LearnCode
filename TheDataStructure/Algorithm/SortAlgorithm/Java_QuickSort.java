/*************************************************************************
    > File Name: Java_QuickSort.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public static int[] QuickSort(int arr[], int start, int end)
{
	int pivot = arr[start];
	int i = start;
	int j = end;
	while(i < j)
	{
		while((i < j) && arr[j] > pivot)
			j--;
		while((i < j) && arr[i] < pivot)
			i++;
		if(arr[i] == arr[j] && i < j)
			i++;
		else
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	if(i-1 > start)
		arr=QuickSort(arr, start, i - 1);
	if(j+1 < end)
		arr=QuickSort(arr, j + 1, end);
	return arr;
}
