/*************************************************************************
    > File Name: Pro11.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :叠罗汉是一个著名的游戏，游戏中一个人要站在另一个人的肩膀上。同时我们应该让下面的人比上面的人更高一点。已知参加游戏的每个人的身高，请编写代码计算通过选择参与游戏的人，我们最多能叠多少个人。注意这里的人都是先后到的，意味着参加游戏的人的先后顺序与原序列中的顺序应该一致。

给定一个int数组men，代表依次来的每个人的身高。同时给定总人数n，请返回最多能叠的人数。保证n小于等于500。

测试样例：
[1,6,2,5,3,4],6
返回：4
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Stack
{
	public:
		int getHeigh(vector<int> men, int n)
		{		
			vector<int> result(n);
			result[0] = 1;
			for(int i =1; i < n; i++)
			{
				result[i] = 1;
				for(int j = i - 1; j >= 0; j--)
				{
					if(men[j] < men[i])
						result[i] = result[i] > result[j] + 1 ? result[i]:result[j]+1;
				}
			}
			int tmp = 0;
			for(int i =0; i < n; i++)
				tmp = tmp > result[i] ? tmp : result[i];
			return tmp;
		}
}

int main(void)
{
	return 0;
}
