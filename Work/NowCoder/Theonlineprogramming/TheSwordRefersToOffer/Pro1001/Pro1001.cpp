/*************************************************************************
    > File Name: Pro1001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Solution
{
	public:
		void replaceSpace(char *str, int length)
		{
			int blankNumber = 0;
			int oldstringLen;
			for(oldstringLen = 0; str[oldstringLen]!='\0';oldstringLen++)
			{
				if(str[oldstringLen] == ' ')
					blankNumber++;
			}
			int newstringLen = oldstringLen + blankNumber*2;
			if(newstringLen > length)
			{
				return ;
			}
			cout<<"step2"<<endl;
			str[newstringLen] = '\0';
			int point1 = oldstringLen - 1;
			int point2 = newstringLen - 1;
			while(point1 >= 0 && point2 > point1)
			{
				if(str[point1] == ' ')
				{
					str[point2--] = '0';
					str[point2--] = '2';
					str[point2--] = '%';
				}
				else
				{
					str[point2--] = str[point1];
				}
				point1--;
			}
		}
};

int main(void)
{
	Solution s;
	char *str="I love you";
	s.replaceSpace(str,strlen(str)+1);
	return 0;
}

