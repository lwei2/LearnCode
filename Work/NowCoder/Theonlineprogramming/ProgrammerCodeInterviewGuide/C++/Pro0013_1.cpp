/*************************************************************************
    > File Name: Pro0013_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
一个栈中元素的类型为整型，现在想将该栈从顶到底按从大到小的顺序排序，只许申请一个栈。除此之外，可以申请新的变量，但不能申请额外的数据结构。如何完成排序？
输入描述:
第一行输入一个N，表示栈中元素的个数
第二行输入N个整数a_ia 
i
​	
 表示栈顶到栈底的各个元素
输出描述:
输出一行表示排序后的栈中栈顶到栈底的各个元素。
示例1
输入
复制
5
5 8 4 3 6
输出
复制
8 6 5 4 3



 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d",&a[i]);
		std::sort(a,a+n);
		for(int i = n - 1; i > -1; i--)
			printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}
