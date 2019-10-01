/*************************************************************************
    > File Name: Pro9.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :编写一个方法，确定某字符串的所有排列组合。

给定一个string A和一个int n,代表字符串和其长度，请返回所有该字符串字符的排列，保证字符串长度小于等于11且字符串中字符均为大写英文字符，排列中的字符串按字典序从大到小排序。(不合并重复字符串)

测试样例：
"ABC"
返回：["CBA","CAB","BCA","BAC","ACB","ABC"]
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Permutation
{
	public:
		int check(string &A)
		{
			int pool[26] = {0};
			int len = A.length();
			int count = 0;
			for(int i = 0; i < len; i++)
				pool[A[i] - 'A']++;
			for(int i = 0; i < 26; i++)
			{
				if(pool[i] >= 2)
					count += pool[i];
			}
			return count;
		}
		void swap1(char &c, char &c1)
		{
			char tmp;
			tmp = c;
			c = c1;
			c1 = tmp;
		}
		void convert(string &A, int i, int j)
		{
			while(j > i)
			{
				char tmp;
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
				i++;
				j--;
			}
		}
		vector<string> getPermutation(string A)
		{
			vector<string> result;
			int len = A.length();
			int count;
			if(A.length() == 1)
			{
				result.push_back(A);
				return result;
			}
			for(int i = 0; i < len - 1; i++)
			{
				for(int j = 0; j < len - 1 - i; j++)
				{
					if(A[j] < A[j+1])
						swap1(A[j],A[j+1]);
				}
			}
			if((count = check(A)) == 0)
				result.push_back(A);
			else
			{
				while(count)
				{
					result.push_back(A);
					count--;
				}
			}
			int i = len - 2;
			while(1)
			{
				if(A[i] > A[i+1])
				{
					int pos;
					for(int j = len - 1; j > i; j--)
					{
						if(A[j] < A[i])
						{
							pos = j;
							break;
						}
					}
					swap1(A[i],A[pos]);
					convert(A,i+1, len - 1);
					if((count = check(A)) == 0)
						result.push_back(A);
					else
					{
						while(count)
						{
							result.push_back(A);
							count--;
						}
					}
					i = len - 2;
				}
				else
					i--;
				if(i == -1)
					break;
			}
			return result;
		}
};

int main(void)
{
	return 0;
}
