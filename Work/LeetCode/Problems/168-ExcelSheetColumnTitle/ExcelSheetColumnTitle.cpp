/*************************************************************************
    > File Name: ExcelSheetColumnTitle.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		string convertTotile1(int n)
		{
			if(n == 1)
				return string("A");
			n = n - 1;
			stack<char> s;
			while(n>=0)
			{
				char tmp = (n%26) + 'A';
				s.push(tmp);
				n = n/26 - 1;
			}
			string res;
			while(!s.empty())
			{
				res += s.top();
				s.pop();
			}
			return res;
		}

	public:
		string convertTotile2(int n)
		{
			char alp[27] = "ZABCDEFFGHIJKLMNOPQRSTUVWXY";
			string output;
			int idv = n;
			int mode = 0;
			while(div != 0)
			{
				mod = div%26;
				div = div/26;
				output.insert(output.begin(), alp[mod]);
				if(mod == 0)
					div--;
			};
			return output;
		}

	public:
		string convertTotile3(int n)
		{
			string res = "";
			while(n > 0)
			{
				int i = (n-1)%26;
				res = (char)('A' + i) + res;
				n = (n-1)/26;
			}
			return res;
		}
};

int main(void)
{
	return 0;
}
