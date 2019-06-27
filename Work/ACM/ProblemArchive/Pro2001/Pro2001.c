/*************************************************************************
    > File Name: Pro2001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double d = 0;
	double X1,X2,Y1,Y2;
	while(scanf("%lf %lf %lf %lf", &X1, &X2, &Y1, &Y2)!=EOF)
	{
		d = sqrt((X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2));
		printf("%.2lf\n",d);
	}
	return 0;
}
