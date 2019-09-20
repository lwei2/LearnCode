/*************************************************************************
    > File Name: Pro7.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在n个顶点的多边形上有n只蚂蚁，这些蚂蚁同时开始沿着多边形的边爬行，请求出这些蚂蚁相撞的概率。(这里的相撞是指存在任意两只蚂蚁会相撞)给定一个int n(3<=n<=10000)，代表n边形和n只蚂蚁，请返回一个double，为相撞的概率。
测试样例：
3
返回：0.75
 ************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

class Ants
{
	public:
		double antsCollision(int n)
		{
			double tmp = 1.0/(pow(2,n-1));
			double ans = 1.0 - tmp;
			return ans;
		}
};

int main(void)
{
	return 0;
}
