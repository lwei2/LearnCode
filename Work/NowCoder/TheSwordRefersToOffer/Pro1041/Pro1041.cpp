/*************************************************************************
    > File Name: Pro1041.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
输出描述:
对应每个测试案例，输出两个数，小的先输出。
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
		vector<int> FindNumbersWithSum(vector<int> array, int sum)
		{
			vector<int> result;
			int length = array.size();
			if(length <= 1)
				return result;
			int i = 0;
			int j = length - 1;
			int Sum;
			while(i < j)
			{
				Sum = array[i] + array[j];
				if(Sum > sum)
					j--;
				else if(Sum < sum)
					i++;
				else
				{
					result.push_back(array[i]);
					result.push_back(array[j]);
					break;
				}
			}
			return result;
		}
};
int main(void)
{
	return 0;
}

