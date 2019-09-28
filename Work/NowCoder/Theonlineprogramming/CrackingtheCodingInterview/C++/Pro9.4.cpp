/*************************************************************************
    > File Name: Pro9.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写一个方法，返回某集合的所有非空子集。

给定一个int数组A和数组的大小int n，请返回A的所有非空子集。保证A的元素个数小于等于20，且元素互异。各子集内部从大到小排序,子集之间字典逆序排序，见样例。

测试样例：
[123,456,789]
返回：{[789,456,123],[789,456],[789,123],[789],[456 123],[456],[123]}
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Subset
{
	public:
		vector<vector<int> > getSubsets(vector<int> A, int n)
		{
			sort(A.begin(), A.end());
			int size = 1 << n;
			vector<vector<int> > subsets;
			for(int i = size - 1; i > 0; --i)
			{
				vector<int> subset;
				for(int j = n - 1; j >= 0; --j)
				{
					if((i >> j) & 1)
						subset.push_back(A[j]);
				}
				subsets.push_back(subset);
			}
			return subsets;
		}
};

int main(void)
{
	return 0;
}
