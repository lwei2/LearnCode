/*************************************************************************
    > File Name: Hangover.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double c;
	int i;
	double OverHangs;
	while(scanf("%lf",&c) == 1)
	{
		if(0.0 == c)
			return 0;
		OverHangs = 0;
		for(i = 1; i ; i++)
		{
			OverHangs += 1.0/(i+1);
			if(OverHangs >= c)
				break;
		}
		printf("%d card(s)\n",i);
	}
	return 0;
}
