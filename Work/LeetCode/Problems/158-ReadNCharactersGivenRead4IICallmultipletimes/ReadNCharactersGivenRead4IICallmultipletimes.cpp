/*************************************************************************
    > File Name: ReadNCharactersGivenRead4IICallmultipletimes.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int read4(char *buf);

class Solution
{
	public:
		/**
		 *@param buf Destination buffer
		 *@param n Maximum number of characters to read
		 *@read The number of characters read
		 */
		char *cache = new char[4];
		int index = 0;
		int count = 0;
		int read(char *buf, int n)
		{
			int len = 0;
			while(len < n)
			{
				while(len < n && index < count)
				{
					buf[len++] = cache[index++];
				}
				if(len == n)
					break;
				count = read4(cache);
				if(count == 0)
					break;
				index = 0;
			}
			return len;
		}
}
int main(void)
{
	return 0;
}
