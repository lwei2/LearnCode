/*************************************************************************
    > File Name: Pro9.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有数量不限的硬币，币值为25分、10分、5分和1分，请编写代码计算n分有几种表示法。

给定一个int n，请返回n分有几种表示法。保证n小于等于100000，为了防止溢出，请将答案Mod 1000000007。

测试样例：
6
返回：2
 ************************************************************************/


#include <iostream>

using namespace std;

class Coins
{
	public:
		int countWays(int n)
		{
			if(n <= 1)
				return n;
			long long int a[n+1];
			for(int i = 0; i <= n; ++i)
				a[i] = 0;
			int c[4] = {1,5,10,25};
			a[0] = 1;
			for(int i = 0; i < 4; ++i)
			{
				for(int j = 0; j <= n; ++j)
				{
					if(j >= c[i])
						a[j] += a[j-c[i]];
				}
			}
			return a[n]%1000000007;
		}
};


int main(void)
{
	return 0;
}
