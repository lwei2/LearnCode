/*************************************************************************
    > File Name: Pro1070.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char brand[105], cheapestbrand[105];

int main(void)
{
	int ave;
	int n,T;
	int p,v;
	int cv, cheapestave;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		cheapestave = 100000;
		cv = 0;
		while(n--)
		{
			scanf("%s%d%d",&brand, &p, &v);
			if(v < 200)
				continue;
			if(v >= 1000)
				ave = p/5;
			else
			{
				int day = v/200;
				ave = p/day;
			}
			if(ave < cheapestave || (ave == cheapestave && v > cv))
			{
				cheapestave = ave;
				strcpy(cheapestbrand, brand);
				cv = v;
			}
		}
		if(cheapestave == 100000)
			continue;
		printf("%s\n",cheapestbrand);
	}
	return 0;
}
