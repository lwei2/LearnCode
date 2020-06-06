/*************************************************************************
    > File Name: Pro1081_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;

typedef struct package
{
	int num;
	int value;
}pack,*Ppack;

int main(void)
{
	int n,m;
	int i,j;
	scanf("%d,%d",&m,&n);
	Ppack p = (Ppack)calloc(n,sizeof(pack));
	int *F = (int*)calloc(m+1,sizeof(int));
	if(getchar() == ',')
	{
		for(i = 0; i < n; i++)
			scanf("%d",&p[i].num);		
	}
	if(getchar() == ',')
	{
		for(i = 0; i < n; i++)
			scanf("%d",&p[i].value);
	}
	for(i = 0; i < n; i++)
	{
		for(j = m; j >= p[i].num; j--)
		{
			F[j] = F[j] > (F[j-p[i].num] + p[i].value) ?
				   F[j]:(F[j-p[i].num] + p[i].value);
		}
	}
	printf("%d\n",F[m]);
	free(F);
	free(p);

	return 0;
}
