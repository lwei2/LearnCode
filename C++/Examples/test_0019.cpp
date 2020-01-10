/*************************************************************************
    > File Name: test_0019.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n1,n2, hcf;
	cin>>n1>>n2;
	if(n2 > n1)
	{
		int tmp = n2;
		n2 = n1;
		n1 = tmp;
	}
	for(int i = 1; i <= n2; ++i)
	{
		if(n1 % i == 0 && n2 % i ==0)
			hcf = i;
	}
	cout<<"HCF="<<hcf<<endl;
	return 0;
}
