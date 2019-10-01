/*************************************************************************
    > File Name: Pro17.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :对于一个有正有负的整数数组，请找出总和最大的连续数列。

给定一个int数组A和数组大小n，请返回最大的连续数列的和。保证n的大小小于等于3000。

测试样例：
[1,2,3,-6,1]
返回：6
 ************************************************************************/


#include <iostream>

using namespace std;

class MaxSum
{
	public:
		int getMaxSum(vector<int> A, int n)
		{
			if(n <= 0)
				return 0;
			int sum = 0;
			int ans = A[0];
			for(int i = 0; i < A.size(); ++i)
			{
				if(sum < 0)
					sum = 0;
				sum += A[i];
				ans = max(ans, sum);
			}
			return ans;
		}
};


int main(void)
{
	return 0;
}
