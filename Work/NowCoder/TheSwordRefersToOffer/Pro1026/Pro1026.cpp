/*************************************************************************
    > File Name: Pro1026.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
输入描述:
输入一个字符串,长度不超过9(可能有字符重复),字符只包括大小写字母。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	private:
		vector<string> result;
	public:
		vector<string> Permutation(string str)
		{
			if(0 == str.length())
				return result;
			Permutation1(str,0);
			sort(result.begin(), result.end());
			return result;
		}
		void Permutation1(string str, int begin)
		{
			if(begin == str.length())
			{
				result.push_back(str);
				return;
			}
			for(int i = begin; str[i]!='\0';i++)
			{
				if(i!=begin && str[begin] == str[i])
					continue;
				swap(str[begin],str[i]);
				Permutation1(str,begin+1);
				swap(str[begin],str[i]);
			}
		}
};

int main(void)
{
	return 0;
}
