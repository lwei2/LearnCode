/*************************************************************************
    > File Name: Pro1003_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>

using namespace std;

int main(void)
{
	int t;
	scanf("%d",&t);
	int i;
	for(i = 0; i < t; i++)
	{
		int n;
		scanf("%d",&n);
		char path[1000];
		scanf("%s",&path);
		int j, count = 0;
		for(j = 0; j < n;)
		{
			if(path[j] == 'X')
			{
				j++;
				continue;
			}
			else if(path[j] == '.')
			{
				count++;
				j+=3;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
