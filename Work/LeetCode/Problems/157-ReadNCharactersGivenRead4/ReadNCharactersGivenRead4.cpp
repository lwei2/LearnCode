/*************************************************************************
    > File Name: ReadNCharactersGivenRead4.cpp
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
		 *@param n  Maximum number of charracter to read
		 *@return The number of characters read
		 */
		int read(char *buf, int n)
		{
			char *tmp = new char[4];
			int len = 0;
			while(len < n)
			{
				int count = read4(tmp);
				if(0 == count)
					break;
				int i = 0;
				while(len < n && i < count)
					buf[len++] = tmp[i++];
			}
			return len;
		}
};
int main(void)
{
	return 0;
}
