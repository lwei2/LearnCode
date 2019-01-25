/*************************************************************************
    > File Name: Pro1004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
 ************************************************************************/

#include<iostream>
#include<stack>

using namespace std;

class Solution
{
	public:
		void push(int node)
		{
			stack1.push(node);
		}
		int pop()
		{
			int value;
			if(stack2.empty())
			{
				while(!stack1.empty())
				{
					value = stack1.top();
					stack2.push(value);
					stack1.pop();
				}
			}
			value = stack2.top();
			stack2.pop();
			return value;
		}
	private:
		stack<int> stack1;
		stack<int> stack2;
};


int main(void)
{
	return 0;
}
