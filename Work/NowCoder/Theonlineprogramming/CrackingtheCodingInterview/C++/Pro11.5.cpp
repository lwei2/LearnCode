/*************************************************************************
    > File Name: Pro11.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个排过序的字符串数组，但是其中有插入了一些空字符串，请设计一个算法，找出给定字符串的位置。算法的查找部分的复杂度应该为log级别。

给定一个string数组str,同时给定数组大小n和需要查找的string x，请返回该串的位置(位置从零开始)。

测试样例：
["a","b","","c","","d"],6,"c"
返回：3
 ************************************************************************/


#include <iostream>

using namespace std;

class Finder
{
	public:
		int findString(vector<string> str, int n, string x)
		{
			int low = 0;
			int high = n - 1;
			while(high >= low)
			{
				int mid = (high + low)/2;
				for(int i = 1; mid <= high && mid >= low; i++)
				{
					if(str[mid] != "")
					{
						if(str[mid] == x)
							return mid;
						else if(str[mid] < x)
						{
							if(i%2 == 1)
								low = mid + i;
							else
								low = mid + 1;
							break;
						}
						else
						{
							if(i%2 == 1)
								high = mid - 1;
							else
								high = mid - i;
							break;
						}
					}
					else
					{
						if(i%2 == 1)
							mid = mid + i;
						else
							mid = mid - i;
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
