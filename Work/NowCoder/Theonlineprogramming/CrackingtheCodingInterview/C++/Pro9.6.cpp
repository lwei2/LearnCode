/*************************************************************************
    > File Name: Pro9.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。

给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。

测试样例：
"(()())",6
返回：true
测试样例：
"()a()()",7
返回：false
测试样例：
"()(()()",7
返回：false
 ************************************************************************/


#include <iostream>

using namespace std;

class Parenthesis
{
	public:
		bool chkParenthesis(string A, int n)
		{
			vector<char> v;
			for(int i = 0; i < n; i++)
			{
				if(A.at(i) == '(')
				{
					v.push_back(A.at(i));
				}
				else
				{
					if(v.size())
					{
						if(A.at(i) == ')')
							v.pop_back();
					}
					else
						return false;
				}
			}
			if(v.size())
				return false;
			else
				return true;
		}
};

int main(void)
{
	return 0;
}
