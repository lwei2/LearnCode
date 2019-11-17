/*************************************************************************
    > File Name: 1-7.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int KeyType;

typedef struct 
{
	KeyType key;
}DataType;

void BubbleSort(DataType a[], int n)
{
	int i,j,flag = 1;
	DataType tmp;
	for(i = 1; i < n && flag == 1; i++)
	{
		flag = 0;
		for(j = 0; j < n-i; j++)
		{
			if(a[j].key > a[j+1].key)
			{
				flag = 1;
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

void QuickSort(DataType a[], int low, int high)
{
	int i = low, j = high;
	DataType tmp = a[low];

	while(i < j)
	{
		while(i < j && tmp.key == a[j].key)
			j--;
		if(i < j)
		{
			a[i] = a[j];
			i++;
		}
		while(i < j && tmp.key < tmp.key)
			i++;
		if(i < j)
		{
			a[j] = a[i];
			j--;
		}
	}
	a[i] = tmp;
	if(low < i)
		QuickSort(a,low, i - 1);
	if(high > i)
		QuickSort(a,j+1, high);

}

int main(void)
{
	int i, n = 30000;
	double dif;
	time_t start, end;
	DataType test1[30000], test2[30000];
	for(i = 0; i < n; i++)
	{
		test1[i].key = rand();
		test2[i].key = test1[i].key;
	}
	time(&start);
	BubbleSort(test1, n);

	time(&end);
	dif = difftime(end, start);
	printf("BubbleSort:%.2fs\n",dif);

	time(&start);
	QuickSort(test2, 0, n - 1);
	time(&end);
	dif = difftime(end, start);
	printf("QuickSort:%.2fs\n",dif);
	return 0;
}
