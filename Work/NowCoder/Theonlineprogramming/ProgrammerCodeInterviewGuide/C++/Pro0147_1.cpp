/*************************************************************************
    > File Name: Pro0147_1.cpp
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
	vector<int> inputs;
	cin>>n;
	inputs.reserve(n);
	int tmp;
	for(int i = 0; i < n; ++i)
	{
		cin>>tmp;
		inputs.emplace_back(tmp);
	}
	int res = 0, ans = 0;
	for(int i = 0; i < inputs.size(); ++i)
		res ^= inputs[i];
	tmp = res & (~res + 1);
	for(int i = 0; i < inputs.size(); ++i)
	{
		if(tmp & inputs[i])
			ans ^= inputs[i];
	}
	res ^= ans;
	if(res > ans)
		cout<<ans<<' '<<res<<endl;
	else
		cout<<res<<' '<<ans<<endl;
	return 0;
}
