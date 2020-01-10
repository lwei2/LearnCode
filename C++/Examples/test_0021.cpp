/*************************************************************************
    > File Name: test_0021.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n1, n2;
	int max;
	cin>>n1>>n2;
	max = (n1 > n2) ? n1 : n2;
	do{
		if(max % n1 == 0 && max % n2 == 0)
		{
			cout<<"LCM="<<max;
			break;
		}
		else
			++max;
	}while(true);
	return 0;
}
