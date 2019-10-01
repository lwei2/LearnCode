/*************************************************************************
    > File Name: Pro10.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :约瑟夫问题是一个著名的趣题。这里我们稍稍修改一下规则。有n个人站成一列。并从头到尾给他们编号，第一个人编号为1。然后从头开始报数，第一轮依次报1，2，1，2...然后报到2的人出局。接着第二轮再从上一轮最后一个报数的人开始依次报1，2，3，1，2，3...报到2，3的人出局。以此类推直到剩下以后一个人。现在需要求的即是这个人的编号。

给定一个int n，代表游戏的人数。请返回最后一个人的编号

测试样例：
5
返回：5
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Joseph
{
	public:
		int getResult(int n)
		{
			vector<int> joseph;
			for(int i =1; i <= n; i++)
				joseph.push_back(i);
			vector<int> result = joseph;
			int m = 2;
			while(result.size() != 1)
			{
				vector<int> tmp;
				tmp.push_back(0);
				for(size_t i = 1; i <= result.size(); i+=m)
					tmp.push_back(result[i-1]);
				tmp[0] = tmp.back();
				tmp.erase(tmp.end() - 1);
				result.swap(tmp);
				m++;
			}
			return result.back();
		}
};


int main(void)
{
	return 0;
}
