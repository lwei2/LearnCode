/*************************************************************************
    > File Name: Pro1005_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int x[50][2];
int y[50][2];

int main(void)
{
	int i,j,k,n;
	int num = 0, tmp = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&x[i][0]);
	for(i = 0; i < n; i++)
		scanf("%d",&y[i][0]);
	for(i = 0; i < n; i++)
		scanf("%d",&x[i][1]);
	for(i = 0; i < n; i++)
		scanf("%d",&y[i][1]);

	for(j = 0; j < n; j++)
	{
		for(k = 0; k < n; k++)
		{
			tmp = 0;
			for(i = 0; i < n; i++)
				if(x[j][0] >= x[i][0] && x[j][0] < x[i][1])
					if(y[k][0] >= y[i][0] && y[k][0] < y[i][1])
						tmp++;
			if(num < tmp)
				num = tmp;
		}
	}
	printf("%d",num);
	return 0;
}
