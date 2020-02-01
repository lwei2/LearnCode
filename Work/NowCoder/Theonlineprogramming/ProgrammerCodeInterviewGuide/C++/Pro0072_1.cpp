/*************************************************************************
    > File Name: Pro0072_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

long long int Count(long long int n)
{
	long long int ccount = 0;
	long long int Factor = 1;
	long long int LowerNum = 0;
	long long int CurrNum = 0;
	long long int HigherNum = 0;
	if(n <= 0)
		return 0;
	while(n/Factor != 0)
	{
		LowerNum = n - (n/Factor)*Factor;
		CurrNum = n/(Factor)%10;
		HigherNum = n/(Factor*10);
		if(CurrNum == 0)
			ccount += HigherNum*Factor;
		else if(CurrNum == 1)
			ccount += HigherNum*Factor + LowerNum+1;
		else
			ccount += (HigherNum+1)*Factor;
		Factor *= 10;
	}
	return ccount;
}

int main(void)
{
	long long int a;
	scanf("%lld", &a);
	printf("%lld\n",Count(a));
	return 0;
}






