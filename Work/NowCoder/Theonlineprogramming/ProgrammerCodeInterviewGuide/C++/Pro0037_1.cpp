/*************************************************************************
    > File Name: Pro0037_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个数组arr，其中只可能含有0、1、2三个值，请实现arr的排序
[要求]
时间复杂度为O(n)O(n)，空间复杂度为O(1)O(1)

输入描述:
第一行一个整数N。表示数组长度
接下来一行N个整数表示数组内的数
输出描述:
输出N个整数，表示排序后的结果
示例1
输入
复制
5
2 0 1 2 0
输出
复制
0 0 1 2 2
备注:
1 \leqslant N \leqslant 10^51⩽N⩽10 
5
 
\text{保证} arr_i = 0/1/2保证arr 
i
​	
 =0/1/2
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int num[100001] = {0};
	for(int i = 0; i < n; i++)
		cin>>num[i];
	int left = -1, i = 0, right = n;
	while(i < right)
	{
		if(num[i] == 2)
		{
			int tmp = num[right-1];
			num[right - 1] = num[i];
			num[i] = tmp;
			right--;
		}
		else if(num[i] == 0)
		{
			int tmp = num[left + 1];
			num[left+1] = num[i];
			num[i] = tmp;
			left++,i++;
		}
		else
			i++;
	}
	for(int i = 0; i < n; i++)
		cout<<num[i]<<" ";

	return 0;
}
