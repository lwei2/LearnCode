/*************************************************************************
    > File Name: DecimalToBinary.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<stdio.h>
void binary(int num)
{
	int r;
	r = num % 2;
	if(num >= 2)
	  binary(num / 2);
	putchar(r + '0');
}
int main(void)
{
	int num;
	printf("input the Decimal nums:");
	scanf("%d",&num);
	binary(num);
	return 0;
}
