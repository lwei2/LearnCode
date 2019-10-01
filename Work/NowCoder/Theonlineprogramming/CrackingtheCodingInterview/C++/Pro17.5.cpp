/*************************************************************************
    > File Name: Pro17.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :我们现在有四个槽，每个槽放一个球，颜色可能是红色(R)、黄色(Y)、绿色(G)或蓝色(B)。例如，可能的情况为RGGB(槽1为红色，槽2、3为绿色，槽4为蓝色)，作为玩家，你需要试图猜出颜色的组合。比如，你可能猜YRGB。要是你猜对了某个槽的颜色，则算一次“猜中”。要是只是猜对了颜色但槽位猜错了，则算一次“伪猜中”。注意，“猜中”不能算入“伪猜中”。

给定两个string A和guess。分别表示颜色组合，和一个猜测。请返回一个int数组，第一个元素为猜中的次数，第二个元素为伪猜中的次数。

测试样例：
"RGBY","GGRR"
返回：[1,1]
 ************************************************************************/


#include <iostream>

using namespace std;

class Result
{
	public:
		vector<int> calcResult(string A, string guess)
		{
			int n1 = 0, n2 = 0;
			map<char,int> arr1, arr2;
			vector<int> res;
			for(int i = 0; i < 4; ++i)
			{
				++arr1[A[i]];
				++arr2[guess[i]];
				if(A[i] == guess[i])
					++n1;
			}
			for(auto it = arr2.begin(); it != arr2.end(); ++it)
			{
				if(A.find(it->first) != string::npos && it->second > 0)
				{
					if(it->second < arr1[it->first])
						n2 += it->second;
					else
						n2 += arr1[it->first];
				}
			}
			n2 = n2 - n1;
			res.push_back(n1);
			res.push_back(n2);
			return res;
		}
};

int main(void)
{
	return 0;
}
