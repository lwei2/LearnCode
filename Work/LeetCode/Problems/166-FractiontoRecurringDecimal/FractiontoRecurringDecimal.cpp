/*************************************************************************
    > File Name: FractiontoRecurringDecimal.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <unordered_map>
#include <limits.h>

using namespace std;

class Solution
{
	public:
		string fractionToDecimal(int numerator, int denominator)
		{
			if(denominator == 0)
				return "";
			if(denominator == -1 && numerator == INT_MIN)
				return to_string((-1*long(numerator)));
			string result;
			int quotient = numerator / denominator;
			if(quotient == 0 && (numerator > 0 && denominator < 0 || numerator < 0 && denominator > 0))
				result = "-0";
			else
				result = to_string(quotient);
			long remainder = abs(numerator % denominator);
			if(remainder == 0)
				return result;
			result += ".";
			unordered_map<int,int> quotient_map;
			do{
				quotient = abs(remainder * 10 / denominator);
				result += to_string(quotient);
				quotient_map[remainder] = result.size() - 1;
				remainder = abs(remainder * 10 % denominator);
			}while(remainder && quotient_map.count(remainder) == 0);
			if(remainder != 0)
			{
				int index = quotient_map[remainder];
				result = result.substr(0,index) + "("+result.substr(index)+")";
			}
			return result;
		}
};
int main(void)
{

	return 0;
}
