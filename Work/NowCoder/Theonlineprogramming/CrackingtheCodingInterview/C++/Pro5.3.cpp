/*************************************************************************
    > File Name: Pro5.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个正整数，请找出其二进制表示中1的个数相同、且大小最接近的那两个数。(一个略大，一个略小)
给定正整数int x，请返回一个vector，代表所求的两个数（小的在前）。保证答案存在。
测试样例：
2
返回：[1,4]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

clas s CloseNumber
{
	public:
		vector<int> getCloseNumber(int x)
		{
			vector<int> result;
			int c01 = 0;
			int c11 = 0;
			int c1 = 0;
			int c0 = 0;
			int c = x, d = x;
			while(((c&1) == 0) && (c!=0))
			{
				c01++;
				c >>= 1;
			}
			while((c&1) == 1)
			{
				c11++;
				c >>= 1;
			}
			while((d&1) == 1)
			{
				c1++;
				d >>= 1;
			}
			while(((d&1) == 0) &&(d!=0))
			{
				c0++;
				d >>= 1;
			}
			result.push_back((x - (1<<(c1))-(1<<(c0-1)) +1));
			result.push_back((x + (1<<(c11-1)) + (1<<c01) -1));
			return result;
		}
};
int main(void)
{
	return 0;
}
