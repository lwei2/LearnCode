/*************************************************************************
    > File Name: Pro1047_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lSearch(string &s, int pos)
{
	while(pos >= 0)
	{
		if(s[pos] == 'L')
			return -2;
		if(s[pos] == 'R')
			return pos;
		pos--;
	}
	return -1;
}

int rSearch(string &s, int pos)
{
	while(pos < s.size())
	{
		if(s[pos] == 'R')
			return -2;
		if(s[pos] == 'L')
			return pos;
		pos++;
	}
	return -1;
}


int main(void)
{
	string s;
	getline(cin,s);
	char flag, preflag = 'L';
	int index, preindex = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '.' && i != s.size() - 1)
			continue;
		else
		{
			flag = s[i];
			index = i;
		}
		if(preflag == 'R' && flag != 'L')
			fill(s.begin() + preindex, s.begin() + index + 1, 'R');
		else if(preflag == 'R' && flag == 'L')
		{
			int len = (index - preindex + 1)/2;
			fill_n(s.begin() + preindex, len, 'R');
			fill_n(s.begin() + index - len + 1, len, 'L');
		}
		else if(preflag != 'R' && flag == 'L')
			fill(s.begin() + preindex, s.begin() + index + 1, 'L');
		preflag = flag;
		preindex = index;
	}
	cout<<s;
	return 0;
}
