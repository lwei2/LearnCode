/*************************************************************************
    > File Name: Pro1.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
假定我们都知道非常高效的算法来检查一个单词是否为其他字符串的子串。请将这个算法编写成一个函数，给定两个字符串s1和s2，请编写代码检查s2是否为s1旋转而成，要求只能调用一次检查子串的函数。给定两个字符串s1,s2,请返回bool值代表s2是否由s1旋转而成。字符串中字符为英文字母和空格，区分大小写，字符串长度小于等于1000。
测试样例：
"Hello world","worldhello "
返回：false
"waterbottle","erbottlewat"
返回：true
 ************************************************************************/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReverseEqual
{
	public:
		bool checkReverseEqual1(string s1, string s2)
		{
			int size1 = s1.size();
			int size2 = s2.size();
			if(size1 == 0 || size2 == 0)
				return false;
			string str = s1 + s1;
			if(str.find(s2) == -1)
				return false;
			return true;
		}

	public:
		bool checkReverseEqual2(string s1, string s2)
		{
			if(s1.length() != s2.length())
				return false;
			string str = s2 + s2;
			if(str.find(s1) == -1)
				return false;
			else
				return true;
		}

	public:
		bool checkReverseEqual3(string s1, string s2)
		{
			int len1 = s1.size();
			int len2 = s2.size();
			if(len1 != len2)
				return false;
			if(len1 == 0 || len2 == 0)
				return false;
			string str = s1 + s1;
			if(str.find(s2) == -1)
				return false;
			else				
				return true;
		}

	public:
		bool checkReverseEqual4(string s1, string s2)
		{
			int len1 = s1.size();
			int len2 = s2.size();
			if(len1 == 0 || len2 == 0)
				return false;
			string str = s1 + s1;
			if(str.find(s2) == -1)
				return false;
			return true;
		}

};

int main(void)
{
	return 0;
}
