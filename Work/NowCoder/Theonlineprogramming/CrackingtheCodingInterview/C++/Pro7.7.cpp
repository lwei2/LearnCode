/*************************************************************************
    > File Name: Pro7.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一些数的素因子只有3、5、7，请设计一个算法，找出其中的第k个数。
给定一个数int k，请返回第k个数。保证k小于等于100。

测试样例：
3
返回：7
 ************************************************************************/


#include <iostream>

using namespace std;

class KthNumber
{
	public:
		int findKth(int k)
		{
			int i = 3;
			int count = 0;
			while(count < k)
			{
				if(i%2 != 0)
				{
					int b = i;
					while(b%3 == 0 || b%5 == 0 || b%7 == 0)
					{
						if(b%3 == 0)
							b = b/3;
						else if(b%5 == 0)
							b = b/5;
						else if(b%7 == 0)
							b = b/7;
						if(b == 1)
							count++;
					}
				}
				i++;
			}
			return --i;
		}
};

int main(void)
{
	return 0;
}
