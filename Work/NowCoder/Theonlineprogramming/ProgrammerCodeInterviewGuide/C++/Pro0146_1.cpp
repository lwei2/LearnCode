/*************************************************************************
    > File Name: Pro0146_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int cnt, num, res = 0;
	cin>>cnt;
	while(scanf("%d",&num) != EOF)
	{
		res ^= num;
	}
	cout<<res;
	return 0;
}
