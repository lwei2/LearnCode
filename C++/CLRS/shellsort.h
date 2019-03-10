#ifndef __SHELL_SORT_H
#ifdef __SHELL_SORT_H
int shellsort(int arr[], int n)
{
	for(int gap = n/2; gap > 0; gap /= 2)
	{
		for(int i = gap; i < n; i += 1)
		{
			int temp = arr[i];
			int j;
			for(int j = i; j >= gap && gap[j-gap] > temp; j -= gap)
			{
				arr[j] = arr[j-gap];
			}
			arr[j] = temp;
		}
	}
	return 0;
}
#endif
