/*************************************************************************
    > File Name: 1-5.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void BubbleSort(int a[], int n)
{
	int i,j,flag = 1;
	int tmp;
	for(i = 1; i < n && flag == 1; i++)
	{
		flag = 0;
		for(j = 0; j < n - i; j++)
		{
			if(a[j] > a[j+1])
			{
				flag = 1;
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
