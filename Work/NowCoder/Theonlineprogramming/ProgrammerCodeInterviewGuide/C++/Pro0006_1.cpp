/*************************************************************************
    > File Name: Pro0006_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
输入描述:
第一行输入一个整数N，表示对队列进行的操作总数。

下面N行每行输入一个字符串S，表示操作的种类。

如果S为"add"，则后面还有一个整数X表示向队列尾部加入整数X。

如果S为"poll"，则表示弹出队列头部操作。

如果S为"peek"，则表示询问当前队列中头部元素是多少。
输出描述:
对于每一个为"peek"的操作，输出一行表示当前队列中头部元素是多少。
示例1
输入

6
add 1
add 2
add 3
peek
poll
peek
输出
复制
1
2
备注:
1<=N<=1000000

-1000000<=X<=1000000

数据保证没有不合法的操作
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
	stack<int>s1,s2;
	while(n--)
	{
		cin>>s;
		if(s == "add")
		{
			cin>>x;
			s1.push(x);
		}
		else if(s == "poll")
		{
			if(s2.empty())
			{
				while(!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
			}
			s2.pop();
		}
		else
		{
			if(s2.empty())
			{
				while(!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
			}
			cout<<s2.top()<<endl;
		}
	}
	return 0;
}
