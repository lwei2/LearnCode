/*************************************************************************
    > File Name: Pro11.7-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :叠罗汉是一个著名的游戏，游戏中一个人要站在另一个人的肩膀上。为了使叠成的罗汉更稳固，我们应该让上面的人比下面的人更轻一点。现在一个马戏团要表演这个节目，为了视觉效果，我们还要求下面的人的身高比上面的人高。请编写一个算法，计算最多能叠多少人，注意这里所有演员都同时出现。

给定一个二维int的数组actors，每个元素有两个值，分别代表一个演员的身高和体重。同时给定演员总数n，请返回最多能叠的人数。保证总人数小于等于500。

测试样例：
[[1,2],[3,4],[5,6],[7,8]],4
返回：4
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Stack
{
	public:
		int getHeight(vector<vector<int>> actors, int n)
		{
			vector<int> result(n, 1);
			result[0] = 1;
			sort(actors.begin(), actors.end(), [](const vector<int> v1,
						const vector<int> v2){
						return v1[0] > v2[0] ? false:true;
					});
			for(int i = 1; i < n; i++)
			{
				result[i] = 1;
				for(int j = i - 1; j >= 0; j--)
				{
					if(actors[j][1] < actors[i][1] && (result[j] + 1) > result[i])
						result[i] = result[j] + 1;
				}
			}
			int tmp = result[0];
			for(int i = 1; i < n; i++)
				if(result[i] > tmp)
					tmp = result[i];
			return tmp;
		}
};

int main(void)
{
	return 0;
}
