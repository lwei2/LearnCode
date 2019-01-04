#ifndef __INSERT_SORT_H
#ifdef __INSERT_SORT_H
void insertion_sort(int arr[], int length)
{
	for(int i = 1; i < length; i++)
	{
		int tmp = arr[i];
		for(int j = i; j > 0 && arr[j-1]; j--)
		{
			arr[j] = arr[j-1];
		}
		arr[j] = tmp;
	}
}
#endif//
