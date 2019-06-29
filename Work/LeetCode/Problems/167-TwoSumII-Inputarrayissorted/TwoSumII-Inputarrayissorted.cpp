/*************************************************************************
    > File Name: TwoSumII-Inputarrayissorted.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<int> twoSum(vector<int>& numbers, int target)
		{
			int start = 0;
			int end = numbers.size() - 1;
			vector<int> result(2,0);
			while(1)
			{
				if(numbers[start] + numbers[end] == target)
				{
					result[0] = start + 1;
					result[1] = end + 1;
					return result;
				}
				else if(numbers[start] + numbers[end] < target)
					start++;
				else
					end--;
			}
		}
};

int main(void)
{
	vector<int> Examples1 = {2,7,11,15};
	Solution s;
	s.twoSum(Examples1,9);
	
	return 0;
}
