/*************************************************************************
    > File Name: 1-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void swap1(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a -b;
}

void swap3(int &a, int &b)
{
	a^= b;
	b^= a;
	a^= b;
}
int main(void)
{
	int a1 = 1, b1 = 2;
	int a2 = 3, b2 = 4;
	int a3 = 5, b3 = 6;
	int a = 2147483647, b = 1;
	swap1(a1,b1);
	swap2(a2,b2);
	swap3(a3,b3);
	printf("after swap...\n");
	printf("a1=%d,b1=%d\n",a1,b1);
	printf("a2=%d,b2=%d\n",a1,b1);
	printf("a3=%d,b3=%d\n",a1,b1);
	swap2(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
