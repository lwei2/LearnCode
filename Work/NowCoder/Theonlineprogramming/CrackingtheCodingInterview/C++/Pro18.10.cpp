/*************************************************************************
    > File Name: Pro18.10.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :现有一个字典，同时给定字典中的两个字符串s和t，给定一个变换，每次可以改变字符串中的任意一个字符，请设计一个算法，计算由s变换到t所需的最少步数，同时需要满足在变换过程中的每个串都是字典中的串。

给定一个string数组dic，同时给定数组大小n，串s和串t，请返回由s到t变换所需的最少步数。若无法变换到t则返回-1。保证字符串长度均小于等于10，且字典中字符串数量小于等于500。

测试样例：
["abc","adc","bdc","aaa”],4,”abc","bdc"
返回：2
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Change
{
	public:
		int countChanges(vector<string> dic, int n, string s, string t)
		{
			queue<pair<string, int>> res;
			set<string> st;
			res.push(pair<string, int>(s,0));
			st.insert(s);
			while(!res.empty())
			{
				pair<string, int> tmp = res.front();
				res.pop();
				if(tmp.first == t)
					return tmp.second;
				string t2 = tmp.first;
				for(int i = 0; i < dic.size(); i++)
				{
					string t1 = dic[i];
					if(t1.size() != t.size())
						continue;
					int count = 0;
					for(int j = 0; j < t1.size(); j++)
					{
						if(t1[j] != t2[j])
							count++;
						if(count == 2)
							break;
					}
					if(count == 1 && st.find(t1) ==  st.end())
					{
						st.insert(t1);
						res.push(pair<string, int>(t1,tmp.second+ 1));
					}
				}
			 }
			return -1;
		}
};

int main(void)
{
	return 0;
}
