/*************************************************************************
    > File Name: Pro1042.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
 ************************************************************************/

#include<iostream>

using namespace std;
class Solution
{
	public:
		string LeftRotateString(string str, int n)
		{
			if(n < 0)
				return NULL;
			if(n == 0)
				return str;
			string strTemp = "";
			strTemp = str.substr(0,n);
			str.erase(0,n);
			str += strTemp;
			return str;
		}
};
int main(void)
{
	return 0;
}
