/*************************************************************************
    > File Name: test_0022.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n1,n2;
	int hcf,tmp,lcm;
	cin>>n1>>n2;
	hcf = n1;
	tmp = n2;
	while(hcf != tmp)
	{
		if(hcf > tmp)
			hcf -= tmp;
		else
			tmp -= hcf;
	}
	lcm = (n1 * n2)/hcf;
	cout<<"LCM="<<lcm;
	cout<<endl;
	return 0;
}
