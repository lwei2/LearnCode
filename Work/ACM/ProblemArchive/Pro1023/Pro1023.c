/*************************************************************************
    > File Name: Pro1023.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int cata[101][13];

void make_catalan(void)
{
	int i,j,jw, temp1,temp2;
	cata[1][0] = cata[1][1] = 1;
	for(i = 2; i <= 100; ++i)
	{
		cata[i][0] = cata[i-1][0];
		temp1 = 4*i - 2;
		jw = 0;
		for(j = 1; j <= cata[i][0];++j)
		{
			cata[i][j] = (cata[i-1][j]*temp1+jw)%100000;
			jw = (cata[i-1][j]*temp1+jw)/100000;
		}
		if(jw!=0)
		{
			cata[i][j] = jw;
			++cata[i][0];
		}
		temp1 = temp2 = 0;
		for(j = cata[i][0]; j>= 1; --j)
		{
			temp2 = (cata[i][j] + temp1*100000)%(i+1);
			cata[i][j] = (cata[i][j]+temp1*100000)/(i+1);
			temp1 = temp2;
		}
		if(!cata[i][cata[i][0]])
			--cata[i][0];
	}
}

int main(void)
{
	int i,n;
	make_catalan();
	while(~scanf("%d",&n))
	{
		printf("%d",cata[n][cata[n][0]]);
		for(i = cata[n][0]-1; i >= 1; --i)
			printf("%05d",cata[n][i]);
		printf("\n");
	}
	return 0;
}


