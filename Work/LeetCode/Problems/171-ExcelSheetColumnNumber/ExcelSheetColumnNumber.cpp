/*************************************************************************
    > File Name: ExcelSheetColumnNumber.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
	public:
		int titleToNumber(string s)
		{
			int res = 0;
			for(int i = 0; i < s.size(); i++)
			{
				int cur = s[i] - 65 + 1;  
				res += cur*pow(26,s.size() - 1 - i);
			}
			return res;
		}
};


int main(void)
{
	return 0;
}
