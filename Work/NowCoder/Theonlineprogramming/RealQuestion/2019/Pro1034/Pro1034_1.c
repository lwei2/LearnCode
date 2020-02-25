/*************************************************************************
    > File Name: Pro1034_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int y,m,d;
	scanf("%d %d %d",&y, &m, &d);
	int sub;
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		switch(m)
		{
			case 1:
				sub = d;
				break;
			case 2:
				sub = 31 + d;
				break;
			case 3:
				sub = 31 + 29 + d;
				break;
			case 4:
				sub = 31 + 29 + 31 + d;
				break;
			case 5:
				sub = 31 + 29 + 31 + 30 + d;
				break;
			case 6:
				sub = 31 + 29 + 31 + 30 + 31 + d;
				break;
			case 7:
				sub = 31 + 29 + 31 + 30 + 31 +30 + d;
				break;
			case 8:
				sub = 31 + 29 + 31 + 30 + 31 + 30 + 31 + d;
				break;
			case 9:
				sub = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + d;
				break;
			case 10:
				sub = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
				break;
			case 11:
				sub = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
				break;
			case 12:
				sub = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
				break;
			default:
				printf("error\n");
		}
	}
	else
	{
	
		switch(m)
		{
			case 1:
				sub = d;
				break;
			case 2:
				sub = 31 + d;
				break;
			case 3:
				sub = 31 + 28 + d;
				break;
			case 4:
				sub = 31 + 28 + 31 + d;
				break;
			case 5:
				sub = 31 + 28 + 31 + 30 + d;
				break;
			case 6:
				sub = 31 + 29 + 31 + 30 + 31 + d;
				break;
			case 7:
				sub = 31 + 28 + 31 + 30 + 31 +30 + d;
				break;
			case 8:
				sub = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
				break;
			case 9:
				sub = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
				break;
			case 10:
				sub = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
				break;
			case 11:
				sub = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
				break;
			case 12:
				sub = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
				break;
			default:
				printf("error\n");
		}
	}
	printf("%d",sub);
	return 0;
}
