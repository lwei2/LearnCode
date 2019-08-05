/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int hillsort(int s[], int n)
{
	int i,j,d;
	d = n/2;
	while(d>=1)
	{
		for(i = d + 1; i <= n; i++)
		{
			s[0] = s[i];
			j = i - d;
			while((j > 0) && (s[0] < s[j]))
			{
				s[j+d] = s[j];
				j = j - d; 
			}
			s[j + d] = s[0];
		}
		d = d/2;
	}
	return 0;
}

int main(void)
{
	int a[11];
	printf("before sort:\n");
	for(int i = 1; i <= 10; i++)
		scanf("%d",&a[i]);
	hillsort(a,10);
	printf("after sort: \n");
	for(int i = 1; i <= 10; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
