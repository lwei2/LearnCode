/*************************************************************************
    > File Name: ShortestPalindrome.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		string shortestPalindrome(string s)
		{
			string aReverse = s;
			reverse(aReverse.begin(), aReverse.end());

			string aProblem = s + "$" + aReverse;
			int aLen = aProblem.size();
			int aPattern[aProblem.size() + 1];
			memset(aPattern, 0, sizeof(aPattern));
			int i,j;
			for(i = 1; i < aLen; i++)
			{
				j = aPattern[i - 1];
				while(j > 0 && aProblem[i] != aProblem[j])
					j = aPattern[j-1];
				if(aProblem[i] == aProblem[j])
					j++;
				aPattern[i] = j;
			}
			int aSplinter = aReverse.size() - aPattern[aLen - 1];
			return aReverse.substr(0, aSplinter) + s;
		}
};

int main(void)
{
	string Example1 = "aacecaaa";

	return 0;
}
