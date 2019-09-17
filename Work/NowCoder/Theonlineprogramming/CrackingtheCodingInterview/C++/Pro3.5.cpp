/*************************************************************************
    > File Name: Pro3.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
 ************************************************************************/


#include <iostream>
#include <stack>

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
			int res;
			if(stack2.size() > 0)
			{
				res = stack2.top();
				stack2.pop();
			}
			else if(stack1.size() > 0)
			{
				while(stack1.size() > 0)
				{
					int ele = stack1.top();
					stack1.pop();
					stack2.push(ele);
				}
				res = stack2.top();
				stack2.pop;
			}
			return res;
		}
	private:
		stack<int> stack1;
		stack<int> stack2;
};

int main(void)
{
	return 0;
}
