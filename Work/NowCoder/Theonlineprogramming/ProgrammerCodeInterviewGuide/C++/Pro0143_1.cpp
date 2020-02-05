/*************************************************************************
    > File Name: Pro0143_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		b = a - b;
		a -= b & (b>>31);
		printf("%d\n",a);
	}	
	return 0;
}
