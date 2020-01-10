/*************************************************************************
    > File Name: test_0018.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<"Enter the two number:";
	while(n1!=n2)
	{
		if(n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	cout<<"HCF="<<n1;
	return 0;
}
