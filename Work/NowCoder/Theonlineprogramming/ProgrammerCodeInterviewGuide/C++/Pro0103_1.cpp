/*************************************************************************
    > File Name: Pro0103_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	map<long long int, int> mp;
	for(int i = 0; i < n; ++i)
	{
		long long int tmp;
		cin>>tmp;
		if(mp[tmp] >= 1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		mp[tmp]++;
	}
	cout<<"YES"<<endl;
	return 0;
}
