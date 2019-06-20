/*************************************************************************
    > File Name: ReverseWordsinaString.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		string reverseWords(string s)
		{
			string word, res;
			char deli = ' ';
			vector<string> words;
			for(char c: s)
			{
				if(c!=deli)
					word += c;
				else if(c == deli && !word.empty())
					words.push_back(move(word));
			}
			if(!word.empty())
				words.push_back(move(word));
			for(int i = words.size() - 1; i > 0; --i)
				res += words[i] + deli;
			if(!words.empty())
				res += words[0];
			return res;
		}
};

int main(void)
{
	return 0;
}
