/*************************************************************************
    > File Name: Pro11.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :现在我们要读入一串数，同时要求在读入每个数的时候算出它的秩，即在当前数组中小于等于它的数的个数(不包括它自身)，请设计一个高效的数据结构和算法来实现这个功能。

给定一个int数组A，同时给定它的大小n，请返回一个int数组，元素为每次加入的数的秩。保证数组大小小于等于5000。

测试样例：
[1,2,3,4,5,6,7],7
返回：[0,1,2,3,4,5,6]
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Rank
{
	public:
		vector<int> getRankOfNumber(vector<int> A, int n)
		{
			vector<int> res;
			if(n == 0)
				return res;
			res.push_back(0);
			for(int i =1; i < n; i++)
			{
				int count = 0;
				for(int j = 0; j < i; j++)
				{
					if(A[j] <= A[i])
						count++;
				}
				res.push_back(count);
			}
			return res;
		}
};



int main(void)
{
	return 0;
}
