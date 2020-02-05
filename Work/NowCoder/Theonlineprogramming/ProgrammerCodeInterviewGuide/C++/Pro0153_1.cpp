/*************************************************************************
    > File Name: Pro0153_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> nums(n);
	int tmp;
	for(int i = 0; i < n; i++)
	{
		cin>>tmp;
		nums[i] = tmp;
	}
	if(n == 0 || n < 2)
	{
		cout<<0;
		return 0;
	}

	int left = n - 1, right = 0;
	int mini = nums[n-1], maxi = nums[0];
	for(int i = n - 2; i >= 0; i--)
	{
		if(nums[i] > mini)
			left = i;
		mini = min(mini, nums[i]);
	}
	if(left == n - 1)
		return 0;
	for(int i = 1; i < n; i++)
	{
		if(nums[i] < maxi)
			right = i;
		maxi = max(maxi, nums[i]);
	}
	if(right == 0)
	{
		cout<<0;
		return 0;
	}
	cout<<right -left + 1;
	return 0;
}
