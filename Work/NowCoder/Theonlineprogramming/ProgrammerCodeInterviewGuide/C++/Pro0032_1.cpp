/*************************************************************************
    > File Name: Pro0032_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个double类型的数组arr，其中的元素可正、可负、可0，返回子数组累乘的最大乘积。例如，arr=[-2.5, 4, 0, 3, 0.5, 8, -1]，子数组[3, 0.5, 8]累乘可以获得最大的乘积12，所以返回12
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)

输入描述:
第一行一个整数N。表示数组长度。
接下来一行N个浮点数表示数组内的数
输出描述:
输出一个浮点数表示答案，保留到小数点后两位
示例1
输入
复制
7
-2.5 4 0 3 0.5 8 -1
输出
复制
12.00
备注:
1 \leqslant N \leqslant 10^51⩽N⩽10 
5
 
-100 < arr_i  \leqslant 100−100<arr 
i
​	
 ⩽100
-10^{22} \leqslant 保证最后的答案 \leqslant 10^{22}−10 
22
 ⩽保证最后的答案⩽10 
22
 
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	double num;
	scanf("%d%lf",&n,&num);
	double minn = num;
	double maxx = num;
	double res = num;
	for(int i = 1; i < n; ++i)
	{
		scanf("%lf",&num);
		double x = maxx;
		maxx=max(num,max(minn*num, maxx*num));
		minn = min(num, min(minn*num, x*num));
		res = max(res, maxx);
	}
	printf("%.2lf\n",res);
	return 0;
}
