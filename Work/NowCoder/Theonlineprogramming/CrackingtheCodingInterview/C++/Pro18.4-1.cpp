/*************************************************************************
    > File Name: Pro18.4-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :现在我们有一个int数组，请你找出数组中每个元素的下一个比它大的元素。

给定一个int数组A及数组的大小n，请返回一个int数组，代表每个元素比他大的下一个元素,若不存在则为-1。保证数组中元素均为正整数。

测试样例：
[11,13,10,5,12,21,3],7
返回：[13,21,12,12,21,-1,-1]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class NextElement
{
	public:
		vector<int> findNext(vector<int> A, int n)
		{
			vector<int> res(n,0);
			int id = 0;
			int cur = 0;
			for(int i = 0; i < n; ++i)
			{
				cur = A[i];
				id = -1;
				for(int j = i + 1; j < n; ++j)
				{
					if(A[j] > cur)
					{
						id = A[j];
						break;
					}
				}
				res[i] = id;
			}
			return res;
		}
};


int main(void)
{
	return 0;
}
