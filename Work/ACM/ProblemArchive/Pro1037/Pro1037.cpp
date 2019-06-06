/*************************************************************************
    > File Name: Pro1037.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a <= 168)
			printf("CRASH %d\n",a);
		else if(b <= 168)
			printf("CRASH %d\n",b);
		else if(c <= 168)
			printf("CRASH %d\n",c);
		else
			printf("NO CRASH");
	}
	return 0;
}
