/*************************************************************************
    > File Name: SelectSort_0001.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public static void SelectSort(int [] arr)
{
	for(int i = 0; i < arr.length - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < arr.length; j++)
		{
			if(arr[min] > arr[j])
				min = j;
		}
		if(min != i)
		{
			int tmp = arr[min];
			arr[min] = arr[i];
			arr[i] = tmp;
		}
	}
}
