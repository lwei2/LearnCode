/*************************************************************************
    > File Name: Pro1022.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
		bool VerifySquenceOfBST(vector<int> sequence)
		{
			int length = sequence.size();
			if(length == 0)
				return false;
			int i = 0;
			while(--length)
			{
				while(sequence[i++] < sequence[length]);
				while(sequence[i++] > sequence[length]);
				if(i < length)
					return false;
				i = 0;
			}
			return true;
		}
};


int main(void)
{
	return 0;
}
