/*************************************************************************
    > File Name: Pro1041.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define MAX 1001
#define LEN 1001

char Number[MAX][LEN];

void BigNumPlus()
{
	for(int i = 3; i < MAX; i++)
	{
		memset(Number[i],'0',LEN);
		for(int j = 0; j < LEN; j++)
		{
			Number[i][j] += (Number[i-1][j] - '0') + (Number[i-2][j] - '0') + (Number[i-2][j] - '0');
		}
		for(int j = 0; j < LEN; j++)
		{
			if(Number[i][j] > '9')
			{
				Number[i][j+1] += (Number[i][j] - '0')/10;
				Number[i][j] = (Number[i][j] - '0')%10 + '0';
			}
		}
	}

}

int main(void)
{
	memset(Number[1],'0',LEN);
	memset(Number[2],'0',LEN);
	Number[1][0] = '0';
	Number[2][0] = '1';
	BigNumPlus();
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(1 == n)
		{
			printf("0\n");
			continue;
		}
		for(int i = LEN - 1; i >= 0; i--)
		{
			if(Number[n][i] != '0')
			{
				while(i >= 0)
					printf("%c",Number[n][i--]);
				printf("\n");
				break;
			}
		}
	}
	return 0;
}







