/*************************************************************************
    > File Name: Pro1108-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if(a%b == 0)
		return b;
	else
		return gcd(b,a%b);
}
int lcm(int a, int b)
{
	int tmp = a*b/gcd(a,b);
	return  tmp;
}
int main(void)
{
	int a, b;
	while(cin>>a>>b)
	{
		cout<<lcm(a,b)<<endl;
	}
	return 0;
}
