/*************************************************************************
    > File Name: Pro9.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
有个小孩正在上楼梯，楼梯有n阶台阶，小孩一次可以上1阶、2阶、3阶。请实现一个方法，计算小孩有多少种上楼的方式。为了防止溢出，请将结果Mod 1000000007

给定一个正整数int n，请返回一个数，代表上楼的方式数。保证n小于等于100000。

测试样例1：
1
返回：1
测试样例2：
3
返回：4
测试样例3：
4
返回：7
 ************************************************************************/


#include <iostream>

using namespace std;

clas GoUpstairs
{
	public:
		int countWays(int n)
		{
			int a[100000];
			a[1] = 1;
			a[2] = 2;
			a[3] = 4;
			for(int i = 4; i <= n; i++)
				a[i]= (a[i-1] + (a[i-2] + a[i-3])%1000000007)%1000000007;
			return a[n];
		}
};

int main(void)
{
	return 0;
}
