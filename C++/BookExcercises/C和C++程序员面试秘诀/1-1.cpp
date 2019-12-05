/*************************************************************************
    > File Name: 1-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int x = 3, y, z;
	x *= (y = z = 4);
	printf("x = %d\n",x);
	
	z = 2;
	x = (y = z);
	printf("x = %d\n",x);
	
	x = (y == z);
	printf("x = %d\n",x);

	x = (y & z);
	printf("x = %d\n",x);

	x = (y&&z);
	printf("x = %d\n",x);

	y = 4;
	x = (y | z);
	printf("x = %d\n",x);
	x = (y || z);
	printf("x = %d\n",x);

	x = (y == z) ? 4 : 5;
	printf("x = %d\n",x);

	x = (y == z) ? 1 : (y < z) ? 2 : 3;
	printf("x = %d\n", x);

	return 0;
}
