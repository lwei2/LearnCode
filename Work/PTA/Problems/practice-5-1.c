/*************************************************************************
    > File Name: practice-5-1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int sum(int m, int n)
{
	int result = 0;
	while(m<=n)
	{
		result+=m;
		++m;
	}
	return result;

}
int main(void)
{
	int m,n;
	scanf("%d %d",&m, &n);
	printf("sum = %d\n", sum(m,n));
	return 0;
}
