/*************************************************************************
    > File Name: TextReverse.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Solution
{
	public:
		void TextReverse1(int T)
		{
			int length, count = 0;
			string str;
			getchar();
			for(int i = 0; i < T; i++)
			{
				getline(cin, str); //cin>>str [error]
				length = str.size();
				str[length] = ' ';
				for(int j = 0; j <= length; j++)
				{
					if(str[j]!=' ')
						++count;
					else
					{
						for(int k = j - 1; k >= j -count; k--)
							cout<<str[k];
						if(j!=length)
							cout<<" ";
						count = 0;
					}
				}
			cout<<endl;
			}
		}
		
	public:
		void TextReverse2(int T)
		{
			int length;
			string str, tmp;
			for(int i = 0; i < T; i++)
			{
			
			}
		}
};


int main(void)
{
	int T;
	cin>>T;
	Solution s;
	s.TextReverse1(T);
	return 0;
}
