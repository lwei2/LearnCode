/*************************************************************************
    > File Name: Pro0095_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int m,n;
	scanf("%d %d", &m, &n);

	int flag = 1;
	int map1[256] = {0};
	int map2[256] = {0};
	char str1[m+1],str2[n+1];
	scanf("%s",str1);
	scanf("%s",str2);

	if(m == n)
	{
		for(int i = 0; i < m; i++)
		{
			map1[str1[i]]++;
			map2[str2[i]]++;
		}
		for(int i = 0; i < 255; i++)
		{
			if(map1[i] != map2[i])
			{
				flag = 0;
				break;
			}
		}
	}
	else
	{
		flag = 0;
	}
	if(flag)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}
