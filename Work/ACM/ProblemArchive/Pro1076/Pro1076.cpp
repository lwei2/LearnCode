/*************************************************************************
    > File Name: Pro1076.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int T;
	int i,j;
	int year, n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&year,&n);
		while(1)
		{
			if(year%4 == 0 && year%100!=0 || year%400==0)
				break;
			year++;
		}
		i = 1;
		while(1)
		{
			year = year + 4;
			if(year%4 == 0 && year%100!=0 || year%400 == 0)
				i++;
			if(i == n)
				break;
		}
		printf("%d\n",year);
	}
	return 0;
}
