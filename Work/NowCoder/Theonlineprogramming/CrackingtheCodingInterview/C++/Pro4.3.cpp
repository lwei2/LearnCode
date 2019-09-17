/*************************************************************************
    > File Name: Pro4.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :对于一个元素各不相同且按升序排列的有序序列，请编写一个算法，创建一棵高度最小的二叉查找树。
给定一个有序序列int[] vals,请返回创建的二叉查找树的高度。
 ************************************************************************/


#include <iostream>

using namespace std;

class MinimalBST
{
	public:
		int buildMinimalBST(vector<int> vals)
		{
			int len = vals.size();
			return log10(len+1)/log10(2) + 1;
		}
}
int main(void)
{
	return 0;
}
