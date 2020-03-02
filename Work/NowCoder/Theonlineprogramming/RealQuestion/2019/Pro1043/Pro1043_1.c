/*************************************************************************
    > File Name: Pro1043_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int child[1000];
	int candy[1000];
	int i,j;
	int m = 0, n = 0;
	int tmp = 0, c = 0, count = 0;
	while(scanf("%d",&child[m]))
	{
		m++;
		if(getchar() == '\n')
			break;
	}
	while(scanf("%d",&candy[n]))
	{
		n++;
		if(getchar() == '\n')
			break;
	}

	for(i = 0; i < m - 1; i++)
	{
		for(j = 0; j < m - i - 1; j++)
		{
			if(child[j] > child[j+1])
			{
				tmp = child[j];
				child[j] = child[j+1];
				child[j+1] = tmp;
			}
		}
	}

	for(i = 0; i < m; i++)
	{
		for(j = c; j < n; j++)
		{
			if(child[i] <= candy[j])
			{
				c = j + 1;
				count++;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
