/*************************************************************************
    > File Name: HappyNumber.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
	public:
		unordered_map<int, int> previousSums;	
		bool isHappy(int n)
		{
			if(n == 1)
				return true;
			string digits = to_string(n);
			int currSum = 0;
			for(int i = 0; i < digits.length(); i++)
			{
				int currDigit = (int)digits.at(i)-48;
				currSum += (int)pow(currDigit, 2);
			}
			if(previousSums.find(currSum) != previousSums.end())
				return false;
			previousSums[currSum] = currSum;
			return isHappy(currSum);
		}
};

int main(void)
{
	return 0;
}
