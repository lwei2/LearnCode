/*************************************************************************
    > File Name: Pro0005_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述:实现一个特殊功能的栈，在实现栈的基本功能的基础上，再实现返回栈中最小元素的操作。
输入描述:
	第一行输入一个整数N，表示对栈进行的操作总数。
	下面N行每行输入一个字符串S，表示操作的种类。
	如果S为"push"，则后面还有一个整数X表示向栈里压入整数X。
	如果S为"pop"，则表示弹出栈顶操作。
	如果S为"getMin"，则表示询问当前栈中的最小元素是多少。
	输出描述:
	对于每个getMin操作，输出一行表示当前栈中的最小元素是多少。
	示例1
	输入
		6
		push 3
		push 2
		push 1
		getMin
		pop
		getMin
	输出
		1
		2
备注:
		1<=N<=1000000
		-1000000<=X<=1000000
 ************************************************************************/


#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	int n,x;
	string s;
	cin>>n;
	stack<int> s1, s2;
	while(n--)
	{
		cin>>s;
		if(s == "push")
		{
			cin>>x;
			if(s2.empty())
				s2.push(x);
			else if(x < s2.top())
				s2.push(x);
			else
			{
				x = s2.top();
				s2.push(x);
			}
			s1.push(x);
		}
		else if(s == "pop")
		{
			s1.pop();
			s2.pop();
		}
		else
			cout<<s2.top()<<endl;
	}
	return 0;
}
