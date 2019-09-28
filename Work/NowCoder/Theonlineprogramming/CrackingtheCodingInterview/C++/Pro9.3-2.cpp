/*************************************************************************
    > File Name: Pro9.3-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在数组A[0..n-1]中，有所谓的魔术索引，满足条件A[i]=i。给定一个不下降序列，元素值可能相同，编写一个方法，判断在数组A中是否存在魔术索引。请思考一种复杂度优于o(n)的方法。

给定一个int数组A和int n代表数组大小，请返回一个bool，代表是否存在魔术索引。

测试样例：
[1,1,3,4,5]
返回：true
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class MagicIndex
{
	public:
		bool findMagicIndex1(vector<int> A, int n)
		{
			for(int i =0; i < n - 1; ++i)
			{
				if((A[i] == i) || (A[i+1] == i+1) && A[i] < A[i+1])
					return true;
			}
			return false;
		}
		bool findMagicIndex2(vector<int> A, int n)
		{
			if(n == 0)
				return true;
			int mid = 0, x = 0, y = n;
			while (x < y)
			{
				mid = (x + y)/2;
				if(mid == A[mid])
					return true;
				else if(mid > A[mid])
					x = mid + 1;
				else
					y = mid;
			}
			mid = 0;
			x = 0;
			y = n;
			while(x < y)
			{
				mid = (x + y)/2;
				if(mid == A[mid])
					return true;
				else if(mid > A[mid])
					y = mid;
				else
					x = mid+1;
			}
			return false;
		}
};


int main(void)
{
	return 0;
}
