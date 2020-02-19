/*************************************************************************
    > File Name: BubbleSort_0003.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public static int[] BubbleSort(int []arr)
{
	int i,j,tmp;
	bool done = false;
	j = 1; 
	while((j < arr.length) && !(done))
	{
		done = true;
		for(i = 0; i < arr.length - j; i++)
		{
			if(arr[i] > arr[i+1])
			{
				done = false;
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
		j++;
	}
	return arr;
}
