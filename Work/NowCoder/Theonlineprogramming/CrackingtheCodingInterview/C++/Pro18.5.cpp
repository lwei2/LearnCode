/*************************************************************************
    > File Name: Pro18.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一篇文章内含多个单词，现给定两个单词，请设计一个高效算法，找出文中这两个单词的最短距离(即最少相隔的单词数,也就是两个单词在文章中位置的差的绝对值)。

给定一个string数组article，代表所给文章，同时给定文章的单词数n和待查找的两个单词x和y。请返回两个单词的最短距离。保证两个单词均在文中出现且不相同，同时保证文章单词数小于等于1000。
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;


class Distance
{
	public:
		int getDistance(vector<string> article, int n, string x, string y)
		{
			vector<int> numx;
			vector<int> numy;
			for(int i = 0; i < n; i++)
			{
				if(article[i] == x)
					numx.push_back(i);
				if(article[i] == y)
					numy.push_back(i);
			}
			int res = n;
			for(int j = 0; j < numx.size(); j++)
			{
				for(int k = 0; k < numy.size(); k++)
					if(abs(numx[j] - numy[k]) < res)
						res = abs(numx[j] - numy[k]);
			}
			return res;
		}
}
int main(void)
{
	return 0;
}
