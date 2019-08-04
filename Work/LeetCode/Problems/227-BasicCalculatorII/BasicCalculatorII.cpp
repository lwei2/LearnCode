/*************************************************************************
    > File Name: BasicCalculatorII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int calculate(string s)
		{
			int n = s.size();
			if(n == 0)
				return 0;
			char sym = '+';
			stack<int> st;
			for(int i = 0; i < n; i++)
			{
				if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
					sym=s[i];
				else if(isdigit(s[i]))
				{
					int cn = 0;
					while(isdigit(s[i]))
						cn =(cn*10) + (s[i++] - '0') ;
					i--;
					if(sym == '-')
						cn = (-1)*cn;
					if(sym == '*' || sym == '/')
					{
						int prev = st.top();
						st.pop();
						if(sym == '*')
							cn *= prev;
						else
						{
							if(cn == 0)
								return -1;
							cn = prev/cn;
						}
					}
					st.push(cn);
				}
				else if(s[i] == ' ')
					continue;				
			}
			int out = 0;
			while(!st.empty())
			{
				out += st.top();
				st.pop();
			}
			return out;
		}
};

int main(void)
{
	return 0;
}
