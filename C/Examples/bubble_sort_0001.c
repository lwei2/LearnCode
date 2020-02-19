/*************************************************************************
    > File Name: bubble_sort_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int a[] = {
		800,2,3,-58,34,76,32,43,56,-70,35,-234,532,543,2500
	};
	int tmp;
	int len = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < len - 1; ++i)
	{
		for(int j = 0; j < len - 1 - i; ++j)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	for(int i = 0; i < len; ++i)
		printf("%d\x20",a[i]);
	printf("\n");
	return 0;
}
