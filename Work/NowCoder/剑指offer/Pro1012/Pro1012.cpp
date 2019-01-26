/*************************************************************************
    > File Name: Pro1012.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		void reOrderArray(vector<int> &array)
		{
			for(int i = 0; i < array.size(); i++)
			{
				for(int j = array.size() - 1; j > i; j--)
				{
					if(array[j]%2 == 1 && array[j-1]%2 == 0)
						swap(array[j],array[j-1]);
				}
			}
		}
};

int main(void)
{
	return 0;
}
