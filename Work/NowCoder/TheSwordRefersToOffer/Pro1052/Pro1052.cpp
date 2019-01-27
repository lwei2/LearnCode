/*************************************************************************
    > File Name: Pro1052.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		bool iSnumeric(char *string)
		{
			if(string == NULL)
				return false;
			if(*string == '+' || *string == '-')
				string++;
			if(*string == '\0')
				return false;
			int dot = 0, num = 0, nume = 0;
			while(*string != '\0')
			{
				if(*string >= '0' && *string <= '9')
				{
					string++;
					num = 1;
				}
				else if(*string == '.')
				{
					if(dot > 0 || nume > 0)
						return false;
					string++;
					dot = 1;
				}
				else if(*string == 'e' || *string == 'E')
				{
					if(num == 0 || nume > 0)
						return false;
					string++;
					nume++;
					if(*string == '+' || *string == '-')
						string++;
					if(*string == '\0')
						return false;
				}
				else
					return false;
			}
			return true;
		}
};


int main(void)
{
	return 0;
}
