/*************************************************************************
    > File Name: Pro0070_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	long long range = 0;
	int cnt = 0;
	cin>>range;
	vector<long long> nums(n,0);
	for(int i = 0;i < n; ++i)
		cin>>nums[i];
	sort(nums.begin(), nums.end());
	int cur = 0;
	for(int i = 0; i < n; ++i)
	{
		if(cur > range)
			break;
		if(cur + 1 < nums[i])
		{
			++cnt;
			cur = cur * 2 + 1;
			--i;
		}
		else
		{
			cur += nums[i];
		}		
	}
	while(cur < range)
	{
		++cnt;
		cur = cur * 2 + 1;
	}
	cout<<cnt<<endl;
	return 0;
}
