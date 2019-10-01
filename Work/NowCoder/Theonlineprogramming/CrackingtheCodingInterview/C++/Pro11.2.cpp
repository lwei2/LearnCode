/*************************************************************************
    > File Name: Pro11.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写一个方法，对一个字符串数组进行排序，将所有变位词合并，保留其字典序最小的一个串。这里的变位词指变换其字母顺序所构成的新的词或短语。例如"triangle"和"integral"就是变位词。

给定一个string的数组str和数组大小int n，请返回排序合并后的数组。保证字符串串长小于等于20，数组大小小于等于300。

测试样例：
["ab","ba","abc","cba"]
返回：["ab","abc"]
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class SortString
{
	public:
		vector<string> sortStrings(vector<string> str, int n)
		{
			vector<string> res;
			if(str.size() <= 0 || n <= 0)
				return res;
			sort(str.begin(), str.end());
			set<string>s;
			for(vector<string>::iterator it = str.begin(); it != str.end(); it++)
			{
				string tmp(*it);
				sort(tmp.begin(), tmp.end());
				if(s.count(tmp) == 0)
				{
					s.insert(tmp);
					res.push_back(*it);
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}
