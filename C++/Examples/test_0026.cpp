/*************************************************************************
    > File Name: test_0026.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	unsigned a,b;
	int i,j;
	a = 65535;
	i = -1;
	j = a;
	b = i;
	printf("(unsigned)%u -> (int)%d\n",a,j);
	printf("(int)%d -> (unsigned)%u\n",i,b);
	return 0;
}
