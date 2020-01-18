/*************************************************************************
    > File Name: Pro0042_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <unordered_set>
using namespace std;

int main(void)
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	const int mod = 1e9 + 7;
	int n,tmp, ans, val;
	unordered_set<int> flag;
	cin>>n;
	ans = 0;
	tmp = 0;
	for(int i = 0; i < n; ++i)
	{
		cin>>val;
		tmp ^= val;
		if(0 == tmp)
		{
			++ans;
			flag.clear();
			tmp = 0;
		}
		else if(flag.find(tmp)!=flag.end())
		{
			++ans;
			flag.clear();
			tmp = 0;
		}
		else
		{
			flag.insert(tmp);
		}
	}
	cout<<ans;
}
