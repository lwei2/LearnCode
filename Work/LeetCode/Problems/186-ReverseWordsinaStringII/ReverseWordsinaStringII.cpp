/*************************************************************************
    > File Name: ReverseWordsinaStringII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		void reverseWords(string &s)
		{
			int length = s.length();
			if(length == 0)
				return ;
			reverseWords(s,0,length - 1);
			int start = 0, end = 0;
			while(start < length)
			{
				end = start;
				while(end + 1 < length && s[end+1] == ' ')
					++end;
				reverseWords(s,start, end);
				start = end + 1;
			}
		}
	private:
		void reverseWords(string &s, int start, int end)
		{
			while(start < end)
			{
				char c = s[start];
				s[start] = s[end];
				s[end] = c;
				++start,--end;
			}
		}
};

int main(void)
{
	return 0;
}
