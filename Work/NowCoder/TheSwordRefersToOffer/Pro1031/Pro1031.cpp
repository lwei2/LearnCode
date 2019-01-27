/*************************************************************************
    > File Name: Pro1031.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		static bool cmp(int a, int b)
		{
			string A = to_string(a) + to_string(b);
			string B = to_string(b) + to_string(a);
			return A < B;
		}
		string PrintMinNumber(vector<int> numbers)
		{
			if(0 == numbers.size())
				return "";
			sort(numbers.begin(), numbers.end(), cmp);
			string result;
			for(int i = 0; i < numbers.size(); i++)
				result += to_string(numbers[i]);
			return result;
		}
};
int main(void)
{
	return 0;
}
