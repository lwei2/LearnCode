/*************************************************************************
    > File Name: ImplementQueueusingStacks.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class MyQueue
{
	private:
		stack<int> s1;
		stack<int> s2;
	public:
		MyQueue()
		{

		}
		void push(int x)
		{
			if(s1.empty())
				s1.push(x);
			else
			{			
				while(!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
				s1.push(x);
				while(!s2.empty())
				{
					s1.push(s2.top());
					s2.pop();
				}
			}
		}
		int pop()
		{
			int x = s1.top();
			s1.pop();
			return x;
		}
		int peek()
		{
			return s1.top();
		}
		bool empty()
		{
			return s1.empty();
		}
};


int main(void)
{
	return 0;
}
