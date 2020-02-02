/*************************************************************************
    > File Name: Pro0102_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int t,n;
	int p,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>p>>m;
		cout<<max(2*n-3,0)<<endl;
	}
	return 0;
}
