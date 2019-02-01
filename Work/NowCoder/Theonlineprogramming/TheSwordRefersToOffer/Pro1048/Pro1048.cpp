/*************************************************************************
    > File Name: Pro1048.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :将一个字符串转换成一个整数(实现Integer.valueOf(string)的功能，但是string不符合数字要求时返回0)，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0。
输入描述:
输入一个字符串,包括数字字母符号,可以为空
+2147483647
    1a33
输出描述:
如果是合法的数值表达则返回该数字，否则返回0
2147483647
    0
************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int StrToInt(string str)
		{
			if(0 == str.length())
				return 0;
			int dig = true;
			int i = 0;
			int num = 0;
			while(str[i] == ' ')
				i++;
			if(str[i] == '+')
				i++;
			else if(str[i] == '-')
			{
				i++;
				dig *= false;
			}
			while(str[i] != '\0')
			{
				if(str[i] >= '0' && str[i] <= '9')
				{
					int flag = dig?1:-1;
					num = num*10 + flag*(str[i] - '0');
					i++;
				}
				else
				{
					num = 0;
					break;
				}
			}
			return num;
		}
};


int main(void)
{
	return 0;
}
