/*************************************************************************
    > File Name: EvaluateReversePolishNotation.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
		int evalRPN(vector<string>& tokens)
		{
			stack<int> s;
			for(auto t: tokens)
			{
				if(t == "+" || t=="*" || t=="-" || t== "/")
				{
					int x = s.top();
					s.pop();
					int y = s.top();
					s.pop();
					switch(t.front())
					{
						case '+':
							y = y + x;
							break;
						case '-':
							y = y - x;
							break;
						case '*':
							y = y * x;
							break;
						case '/':
							y = y / x;
							break;
					}
					s.push(y);
				}
				else
					s.push(stoi(t));
			}
			return s.top();
		}
};
int main(void)
{
	return 0;
}
