/*************************************************************************
    > File Name: ImplementStackusingQueues.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class MyStack
{
		int n;
		queue<int>q;

	public:
		MyStack()
		{
			n = 0;
		}
		void push(int x)
		{
			q.push(x);
			n++;
			for(int i = 0; i < q.size() - 1; i++)
			{
				q.push(q.front());
				q.pop();
			}
		}
		int pop()
		{
			n--;
			int a = q.front();
			q.pop();
			return a;
		}
		int top()
		{
			return q.front();
		}
		bool empty()
		{
			return (n==0);
		}
};

int main(void)
{
	return 0;
}
