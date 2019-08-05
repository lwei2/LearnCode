/*************************************************************************
    > File Name: FinancialManagement.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

double a[51];
int main(void)
{
	int i,j;
	double s = 0.0;
	for(i = 1; i <= 12; i++)
	{
		scanf("%lf",&a[i]);
		s += a[i];
	}
	s = s/12.0;
	printf("$%.2f\n",s);
	return 0;
}
