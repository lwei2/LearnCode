/*************************************************************************
    > File Name: Pro1043.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		string ReverseSentence(string str)
		{
			auto size = str.size();
			if(size == 0)
				return "";
			int mark = 0;
			str += ' ';
			for(int i = 0; i < size + 1; ++i)
			{
				if(str[i] == ' ')
				{
					ReverseWord(str, mark, i - 1);
					mark = i + 1;
				}
			}
			str = str.substr(0, size);
			ReverseWord(str, 0, size - 1);
			return str;
		}
		void ReverseWord(string str, int start, int end)
		{
			while(start < end)
			{
				swap(str[start],str[end]);
				++start;
				--end;
			}
		}
};

int main(void)
{
	return 0;
}
