/*************************************************************************
    > File Name: Pro3.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :    有家动物收容所只收留猫和狗，但有特殊的收养规则，收养人有两种收养方式，第一种为直接收养所有动物中最早进入收容所的，第二种为选择收养的动物类型（猫或狗），并收养该种动物中最早进入收容所的。给定一个操作序列int[][2] ope(C++中为vector<vector<int>>)代表所有事件。若第一个元素为1，则代表有动物进入收容所，第二个元素为动物的编号，正数代表狗，负数代表猫；若第一个元素为2，则代表有人收养动物，第二个元素若为0，则采取第一种收养方式，若为1，则指定收养狗，若为-1则指定收养猫。请按顺序返回收养的序列。若出现不合法的操作，即没有可以符合领养要求的动物，则将这次领养操作忽略。
测试样例：
[[1,1],[1,-1],[2,0],[2,-1]]
返回：[1,-1]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class CatDogAsylum
{
	public:
		vector<int> asylum(vector<vector<int>> ope)
		{
			vector<int> result, res;
			if(ope.empty())
				return result;
			int len = ope.size();
			for(int i = 0; i < len; i++)
			{
				if(ope[i][0] == 1)
					result.push_back(ope[i][1]);
				else if(ope[i][0] == 2)
				{
					if(!result.empty())
					{
						if(ope[i][1] == 0)
						{
							res.push_back(result[0]);
							result.erase(result.begin());
						}
						else if(ope[i][1] == 1)
						{
							for(int j = 0; j < result.size(); j++)
							{
								if(result[j] > 0)
								{
									res.push_back(result[j]);
									result.erase(result.begin() + j);
									break;
								}
							}
						}
						else if(ope[i][1] == -1)
						{
							for(int j = 0; j < result.size(); j++)
							{
								if(result[j] < 0)
								{
									res.push_back(result[j]);
									result.erase(result.begin() + j);
									break;
								}
							}
						}
					}	
				}
			}
			return res;
		}
};
int main(void)
{
	return 0;
}
