/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int leap(int year)
{
	if(year%4 == 0 && year%100!=0 || year%400 == 0)
		return 1;
	else
		return 0;
}

int Counttheday(int year, int month, int day)
{
	int sum = 0;
	int i,j,k;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(year) == 1)
		for(i = 0; i < month-1; i++)
			sum += b[i];
	else
		for(i = 0; i < month-1; i++)
			sum += a[i];
	for(j = 2011; j < year; j++)
		if(leap(j) == i)
			sum += 366;
		else
			sum += 365;
	sum += day;
	return sum;
}


int main(void)
{
	int n;
	int year, month, day;
	printf("Enter the year, month,day:\n");
	scanf("%d%d%d",&year,&month,&day);

	n = Counttheday(year, month, day);
	if((n%5) < 4 && (n%5) > 0)
		printf("%d: %d: %d 打渔\n",year, month, day);
	else
		printf("%d: %d: %d 晒网\n",year, month, day);
	return 0;
}
