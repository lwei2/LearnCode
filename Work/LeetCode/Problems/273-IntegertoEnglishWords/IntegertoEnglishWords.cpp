/*************************************************************************
    > File Name: IntegertoEnglishWords.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<string> tens{"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
		vector<string> lessThan20{"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	public:
		string numberToWords(int num)
		{
			string ret;
			if(num == 0)
				return "Zero";
			if(num >= 1000000000)
			{
				int quo = num/1000000000;
				ret += lessThan20[quo] + " Billion";
				num = num % 1000000000;
				if(num > 0)
					ret += " ";
			}
			if(num >= 1000000)
			{
				int quo = num/1000000;
				ret += helper(quo) + " Million";
				num = num % 1000000;
				if(num > 0)
					ret += " ";
			}
			if(num >= 1000)
			{
				int quo = num / 1000;
				ret += helper(quo) + " Thousand";
				num = num % 1000;
				if(num > 0)
					ret += " ";
			}
			ret += helper(num);
			return ret;
		}
};

int main(void)
{
	return 0;
}
