/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include "leapyear.h"
int main(void)
{
	int year;
	printf("the year is:");
	scanf("%d",&year);
	if(1 == isLeapYear(year))
		printf("the year is %d, Leap Year!\n",year);
	else
		printf("the year is %d, not Leap Year!\n",year);

	return 0;
}
