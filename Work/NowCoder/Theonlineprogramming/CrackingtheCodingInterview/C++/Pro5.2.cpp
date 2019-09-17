/*************************************************************************
    > File Name: Pro5.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个介于0和1之间的实数，类型为double，返回它的二进制表示。如果该数字无法精确地用32位以内的二进制表示，返回“Error”。给定一个double num，表示0到1的实数，请返回一个string，代表该数的二进制表示或者“Error”。
测试样例：
	0.625
返回：
	0.101
 ************************************************************************/


#include <iostream>

using namespace std;

class BinDecimal
{
	public:
		string printBin(double num)
		{
			string res = "0.";
			int cnt = 32;
			while(cnt-- && num > 0.00001)
			{
				num*=2;
				int c = num;
				num -= c;
				res += (c+48);
			}
			return cnt > 0 ? res : "Error";
		}
};

int main(void)
{
	return 0;
}
