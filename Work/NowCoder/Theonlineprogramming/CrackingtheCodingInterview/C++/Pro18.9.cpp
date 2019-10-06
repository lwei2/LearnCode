/*************************************************************************
    > File Name: Pro18.9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :现有一些随机生成的数字要将其依次传入，请设计一个高效算法，对于每次传入一个数字后，算出当前所有传入数字的中位数。(若传入了偶数个数字则令中位数为第n/2小的数字，n为已传入数字个数)。

给定一个int数组A，为传入的数字序列，同时给定序列大小n，请返回一个int数组，代表每次传入后的中位数。保证n小于等于1000。

测试样例：
[1,2,3,4,5,6],6
返回：[1,1,2,2,3,3]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Middle
{
	public:
		vector<int> getMiddle(vector<int> A, int n)
		{
			vector<int> maxheap;
			vector<int> minheap;
			vector<int> result;
			for(int i = 0; i < n; ++i)
			{
				if(maxheap.size() == minheap.size())
					if(minheap.size() > 0 && minheap.front() < A[i])
					{
						pop_heap(minheap.begin(), minheap.end(), greater<int>());
						maxheap.push_back(minheap.back());
						push_heap(maxheap.begin(), maxheap.end(),less<int>());
						minheap.pop_back();
	
						minheap.push_back(A[i]);
						push_heap(minheap.begin(), minheap.end(), greater<int>());
					}
					else
					{
						maxheap.push_back(A[i]);
						push_heap(maxheap.begin(), maxheap.end(), less<int>());
					}
				else
				{
					if(maxheap.front() > A[i])
					{
						pop_heap(maxheap.begin(), maxheap.end(), less<int>());
						minheap.push_back(maxheap.back());
						push_heap(minheap.begin(), minheap.end(), greater<int>());
						maxheap.pop_back();

						maxheap.push_back(A[i]);
						push_heap(maxheap.begin(), maxheap.end(), less<int>());
					}
					else
					{
						minheap.push_back(A[i]);
						push_heap(minheap.begin(), minheap.end(), greater<int>());
					}
				}
				result.push_back(maxheap.front());
			}
			return result;
		}
};


int main(void)
{
	return 0;
}
