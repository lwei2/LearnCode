/*************************************************************************
    > File Name: Pro0069_1.cpp
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
	vector<long long> nums(n,0);
	for(int i = 0; i < n; ++i)
		cin>>nums[i];
	sort(nums.begin(), nums.end());
	long long range = 0;
	for(int i = 0; i < n; ++i)
	{
		if(range + 1 >= nums[i])
			range += nums[i];
		else
			break;
	}
	cout<<range + 1<<endl;
	return 0;
}
