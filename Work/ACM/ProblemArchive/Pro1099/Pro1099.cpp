/*************************************************************************
    > File Name: Pro1099.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

typedef long long ll;

ll GCD(ll a, ll b)
{
	if(a == 0 || a == b)
		return 1;
	return a%b == 0 ? b:GCD(b,a%b);
}
int digits(ll n)
{
	int d = 0;
	while(n)
	{
		n/=10;
		d++;
	}
	return d;
}

int main(void)
{
	int n;
	ll num,deno,inte;
	while(scanf("%d",&n)!=EOF)
	{
		num = 0;
		deno = 1;
		inte = 1;
		for(int i = 1 ; i <= n - 1; i++)
		{
			num = num*i + deno*n;
			deno = deno*i;
			ll gcd=GCD(num,deno);
			num /= gcd;
			deno /= gcd;
		}
		inte += num/deno;
		num = num%deno;
		if(num == 0)
			printf("%lld\n",inte);
		else
		{
			for(int i = 0; i <= digits(inte); i++)
				printf(" ");
			printf("%lld\n",num);
			printf("%lld ",inte);
			for(int i = 0; i < digits(deno); i++)
				printf("-");
			printf("\n");
			for(int i = 0; i <= digits(inte); i++)
				printf(" ");
			printf("%lld\n",deno);
		}
	}
	return 0;
}
