/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int isLeapYear(int year);

char *week[] = {
	"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
int main(void)
{
	int y,m,d;
	int sum,n,i;
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("the year,month,day:\n");
	scanf("%d,%d,%d",&y,&m,&d);
	sum = 0;
	for(int i = 1; i < m; i++)
		sum = sum + month[i];
	sum = sum + d;
	if(isLeapYear(y)&&m>2)
		sum = sum + 1;
	n =(y - 1 + (y - 1)/4 - (y - 1)/100 + (y - 1)/400 + sum)%7;

	printf("the day is %s\n",week[n]);
	return 0;
}
int isLeapYear(int year)
{
	return (year%4 == 0 && year%100!=0 ||(year%400) == 0);
}
