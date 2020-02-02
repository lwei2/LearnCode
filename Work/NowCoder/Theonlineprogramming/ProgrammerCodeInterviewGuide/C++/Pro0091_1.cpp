/*************************************************************************
    > File Name: Pro0091_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long *nums;

int main(void)
{
	int n;	
	cin>>n;
	nums = new long[n];
	vector<long> first,second;
	for(int i = 0; i < n; i++)
	{
		cin>>nums[i];
		second.push_back(0);
	}
	if(1 == n)
	{
		cout<<nums[0];
		return 0;
	}
	long sum_j = nums[0];
	for(int j = 1; j < n; j++)
	{
		sum_j += nums[j];
		long sum_i = sum_j;
		first.clear();
		for(int i = 0; i < n - j; i++)
		{
			first.push_back(max(second[i+1] + nums[i], second[i] + nums[i+j]));
		}
		second.clear();
		for(int i = 0; i < n - j; i++)
		{
			second.push_back(sum_i - first[i]);
			if(i + j < n - 1)
			{
				sum_i = sum_i - nums[i] + nums[i + j + 1];
			}
		}
	}
	cout<<max(first[0],second[0])<<endl;
	return 0;
}
