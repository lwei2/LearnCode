/*************************************************************************
    > File Name: Pro1108-3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int lcm(int a, int b)
{
	int max = (a > b ? a : b);
	int min = (a < b ? a : b);
	for(int i = 1; ; i++)
	{
		if(max*i%min == 0)
			return max*i;
	}
}
int main(void)
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<lcm(a,b)<<endl;
	}
	return 0;
}
