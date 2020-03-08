/*************************************************************************
    > File Name: Pro1048_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int mp[10000001] = {
	0
};

int main(void)
{
	int n;
	cin>>n;
	int x,y;
	for(int i = 1; i <= n; ++i)
	{
		cin>>x>>y;
		for(int j = x; j <= y; ++j)
			mp[j] = i;
	}
	set<int> num;
	for(int &k : mp)
	{
		if(k > 0)
			num.insert(k);
	}
	cout<<num.size()<<endl;
	return 0;
}
