/*************************************************************************
    > File Name: Pro5.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写程序交换一个数的二进制的奇数位和偶数位。（使用越少的指令越好）
给定一个int x，请返回交换后的数int。

测试样例：
10
返回：5
 ************************************************************************/


#include <iostream>

using namespace std;

class Exchange
{
	public:
		int exchangeOddEven(int x)
		{
			vector<int> w = {};
			while(x!=0)
			{
				w.push_back(x%2);
				x = x>>1;
			}
			if(w.size()%2 != 0)
				w.push_back(0);
			reverse(w.begin(), w.end());
			for(int i = 0; i < w.size();)
			{
				swap(w[i], w[i+1]);
				i = i + 2;
			}
			int ans = 0;
			for(int i = 0; i < w.size(); i++)
				ans = ans*2 + w[i];
			return ans;
		}
};

int main(void)
{
	return 0;
}
