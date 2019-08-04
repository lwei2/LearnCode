/*************************************************************************
    > File Name: BasicCalculator.cpp
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
			int sign = 1;
			int result = 0;
			stack<int> st;
			for(int i = 0; i < s.size(); i++)
			{
				if(s[i] >= '0')
				{
					int num = 0;
					while(i < s.size() && s[i] >= '0')
					{
						num *= 10;	
						num += int(s[i]) - '0';
						i++;
					}
					i--;
					result += num*sign;
				}
				else if(s[i] == '+')
					sign = 1;
				else if(s[i] == '-')
					sign = -1;
				else if(s[i] == '(')
				{
					st.push(result);
					st.push(sign);
					result = 0;
					sign = 1;
				}
				else if(s[i] == ')')
				{
					sign = st.top();
					st.pop();
					result *= sign;
					result += st.top();
					st.pop();
				}
			}	
			return result;
		}
};

int main(void)
{
	string Example1 = "1+1";

	return 0;
}
