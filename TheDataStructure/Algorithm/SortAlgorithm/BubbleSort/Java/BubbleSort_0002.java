/*************************************************************************
    > File Name: BubbleSort_0002.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public static void BubbleSort(int arr[])
{
	for(int i = 0; i < arr.length - 1; i++)
	{
		for(int j = 0; j < arr.length - 1 - i; j++)
		{
			if(arr[i] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
