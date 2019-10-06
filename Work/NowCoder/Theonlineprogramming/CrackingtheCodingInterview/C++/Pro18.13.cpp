/*************************************************************************
    > File Name: Pro18.13.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个单词清单，请设计一个高效算法，计算由清单中单词组成的最大子矩阵，要求矩阵中的行和列都是清单中的单词。

给定一个string数组dic，代表单词清单，同时给定清单的大小n，请返回最大子矩阵的面积。保证单词清单的大小小于等于50，且某一长度的串的数量小于等于12。

测试样例：
["aaa","aaa","aaa","bb","bb"]
返回：9
 ************************************************************************/


#include <iostream>
#include <vector>
#include <map>

using namespace std;

class AlphaMatrix
{
	public:
		int findAlphaMatrix(vector<string> dic, int n)
		{
			map<string, int> m;
			int res = 0, maxv = 0;
			for(int i = 0; i < n; i++)
			{
				m[dic[i]]++;
				int tmp = dic[i].length() * m[dic[i]];
				res = max(res, tmp);
			}
			return res;
		}
};

int main(void)
{
	return 0;
}
