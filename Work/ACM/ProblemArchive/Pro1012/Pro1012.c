/*************************************************************************
    > File Name: Pro1012.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	double sum,t,e,i,j,n;
    printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
	t = 2;
	sum = 2.5;
	for(i = 3; i <= 9; i++)
	{
		t*=i;
		sum += 1/t;
		e = sum;
		printf("%d %.9lf\n",(int)i, e);
	}
	return 0;
}
