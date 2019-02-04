/*************************************************************************
    > File Name: Pro1000_LargestProduct.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	给定一个无序数组，包含正数、负数和0，要求从中找出3个数的乘积，使得乘积最大，
	要求时间复杂度：O(n)，空间复杂度：O(1)
	输入描述:
		无序整数数组A[n]
	输出描述:
	满足条件的最大乘积
	示例1
		输入
			3 4 1 2
		输出
			24
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int temp;
	vector<long long> max;
	vector<long long> min;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>temp;
		sort(max.begin(), max.end(), greater<long long>());
		sort(min.begin(), min.end());
		if(max.size() < 3)
			max.push_back(temp);
		else if(temp > max[2])
			max[2] = temp;

		if(min.size() < 2)
			min.push_back(temp);
		else if(temp < min[1])
			min[1] = temp;
	}
	sort(max.begin(), max.end(), greater<int>());
	sort(min.begin(), min.end());
	long long A = max[0]*max[1]*max[2];
	long long B = min[0]*min[1]*max[0];
	cout<<(A>B?A:B)<<endl;

	return 0;
}


