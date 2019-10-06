/*************************************************************************
    > File Name: Pro18.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一组单词，请编写一个程序，在数组中找出由数组中字符串组成的最长的串A，即A是由其它单词组成的(可重复)最长的单词。

给定一个string数组str，同时给定数组的大小n。请返回最长单词的长度，保证题意所述的最长单词存在。

测试样例：
["a","b","c","ab","bc","abc"],6
返回：3
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class LongestString
{
	public:
		static bool cmp(const string &a, const string &b)
		{
			return a.size() < b.size();
		}
		int getLongest(vector<string> str, int n)
		{
			sort(str.begin(), str.end(), cmp);
			int i,num;
			for(int i = n - 1; i >= 0; i--)
			{
				string tmp = str[i];
				for(int j = i - 1; j >= 0; j--)
				{
					while((num = tmp.find(str[j]))!=-1)
						tmp.erase(num, str[j].size());
					if(tmp.empty())
						return str[i].size();
				}
			}
			return -1;
		}
};

int main(void)
{
	return 0;
}
