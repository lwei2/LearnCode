/*************************************************************************
    > File Name: Pro9.3-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在数组A[0..n-1]中，有所谓的魔术索引，满足条件A[i]=i。给定一个升序数组，元素值各不相同，编写一个方法，判断在数组A中是否存在魔术索引。请思考一种复杂度优于o(n)的方法。

给定一个int数组A和int n代表数组大小，请返回一个bool，代表是否存在魔术索引。

测试样例：
[1,2,3,4,5]
返回：false
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class MagicIndex
{
	public:
		bool findMagicIndex1(vector<int> A, int n)
		{
			for(int i = 0; i < n; i++)
			{
			#if 0
				if(A[i] == i)
					return true;
				else
					return false;
			#elif 0
				if(A[i] != i)
					return false;
				else					
					return true;
			#else 
				if(A[i] != 0)
					return false;
				return true;
			#endif
			}
		}
		bool findMagicIndex2(vector<int> A, int n)
		{
			int low = 0;
			int high = A.size();
			while(low <= high)
			{
				int middle = (low +high);
				if(A[middle] == middle)
					return true;
				if(A[middle] < middle)
					low = middle + 1;
				if(A[middle] > middle)
					high = middle - 1;
			}
			return false;
		}
};

int main(void)
{
	return 0;
}
