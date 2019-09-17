/*************************************************************************
    > File Name: Pro1.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :利用字符重复出现的次数，编写一个方法，实现基本的字符串压缩功能。比如，字符串“aabcccccaaa”经压缩会变成“a2b1c5a3”。若压缩后的字符串没有变短，则返回原先的字符串。给定一个string iniString为待压缩的串(长度小于等于10000)，保证串内字符均由大小写英文字母组成，返回一个string，为所求的压缩后或未变化的串。
测试样例
"aabcccccaaa"
返回："a2b1c5a3"
"welcometonowcoderrrrr"
返回："welcometonowcoderrrrr"

 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Zipper
{
	public:
		string zipString1(string iniString)
		{
			if(iniString.size() == 0 || iniString.size() == 1)
				return iniString;
			string res;
			char c = iniString[0];
			int num = 0;
			for(int i = 0; i < iniString.size(); i++)
			{
				if(i != iniString.size() - 1 && iniString[i] == c)
					num++;
				else if(i == iniString.size() - 1 && iniString[i] == c)
				{
					num++;
					res += c;
					res += to_string(num);
				}
				else if(i != iniString.size() - 1 && iniString[i] != c)
				{
					res += c;
					res += to_string(num);
					num = 1;
					c = iniString[i];
				}
				else
				{
					res += c;
					res += to_string(num);
					res += iniString[i];
					res += '1';
				}				
			}
			if(res.size() < iniString.size())
				return res;
			else
				return iniString;
		}

	public:
		string zipString2(string iniString)
		{
			string res = "";
			int n = iniString.size();
			for(int i = 0; i < n; ++i)
			{
				int cnt = 1;
				while(i < n - 1 && iniString[i] == iniString[i+1])
				{
					++cnt;
					++i;
				}
				res += iniString[i] + to_string(cnt);
			}
			return res.size() < n ? res : iniString;
		}

	public:
		string zipString3(string iniString)
		{
			string str;
			int i = 0, j = 0;
			while(i < iniString.length())
			{
				while(iniString[i] == iniString[j])
					i++;
				str += iniString[j];
				str += to_string(i - j);
				j = i;
			}
			if(iniString.length() < str.length())
				return iniString;
			else
				return str;
		}
};
int main(void)
{
	return 0;
}
