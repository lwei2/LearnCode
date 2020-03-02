/*************************************************************************
    > File Name: Pro1044_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int i,j;
	int m = 0;
	scanf("%d",&n);
	if(n > 0)
		m = 1 + n + (n*(n-1))/2;
	printf("%d",m);
	return 0;
}
