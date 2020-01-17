/*************************************************************************
    > File Name: Pro0028_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
定义局部最小的概念。arr长度为1时，arr[0]是局部最小。arr的长度为N(N>1)时，如果arr[0]<arr[1]，那么arr[0]是局部最小；如果arr[N-1]<arr[N-2]，那么arr[N-1]是局部最小；如果0<i<N-1，既有arr[i]<arr[i-1]，又有arr[i]<arr[i+1]，那么arr[i]是局部最小。
给定无序数组arr，已知arr中任意两个相邻的数不相等。写一个函数，只需返回arr中任意一个局部最小出现的位置即可
[要求]
时间复杂度为O(\log n)O(logn)，空间复杂度为O(1)O(1)

输入描述:
第一行有一个整数N。标书数组长度
接下来一行，每行N个整数表示数组中的数
输出描述:
输出一个整数表示答案
示例1
输入
复制
3
2 1 3
输出
复制
1
说明
因为arr[0] > arr[1] 且 arr[1] < arr[2]，因此1是一个合法答案
示例2
输入
复制
1
1
输出
复制
0
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	int one, two, three;
	cin>>one>>two;
	if(one < two)
	{
		cout<<0;
		return 0;
	}
	for(int i = 2; i < N; i++)
	{
		cin>> three;
		if(two < one && three > two)
		{
			cout<<i - 1;
			return 0;
		}
		one = two;
		two = three;
	}
	if(two < one)
		cout<<N - 1;
	return 0;
}
