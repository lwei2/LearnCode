/*************************************************************************
    > File Name: Pro0118_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> num(n);
	for(int i = 0; i < n; i++)
		cin>>num[i];
	for(int i = 0; i < n/2; i++)
		cout<<num[n/2 + i]<<" "<<num[i]<<" ";
	return 0;
}
