/*************************************************************************
    > File Name: Pro1038_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	char str[100];
	int len,flag;
	scanf("%s",str);
	len = strlen(str);

	int sum = 0;
	int tmp = len-1;
	for(int i = len - 1; i >= 0; i--)
	{
		if(str[i] == 'D' && str[i+1] != 'D')
		{
			str[i] = 'C';
			str[tmp] = 'D';
			sum = sum + tmp - i;
			i = tmp;
		}
		else if(str[i] == 'C' && str[i+1] == 'D')
			tmp = i;
	}
	printf("%d",sum);
	return 0;
}
