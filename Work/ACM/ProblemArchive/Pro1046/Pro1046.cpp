/*************************************************************************
    > File Name: Pro1046.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)
{
	int k, n, m;
	double res;
	int t = 0;
	cin>>k;
	while(k--)
	{
		cin>>n>>m;
		if(0 == n%2 || 0 == m%2)
		{
			cout<<"Scenario #"<< ++t<<":"<<endl;
			res = m*n;
			cout<<fixed<<setprecision(2)<<res<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"Scenario #"<< ++t<<":"<<endl;
			res = m*n + 0.414;
			cout<<fixed<<setprecision(2)<<res<<endl;
			cout<<endl;
		}
	}
	return 0;
}
