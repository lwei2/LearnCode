/*************************************************************************
    > File Name: Pro1000_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	int i,j,len;
	string input, str;
	vector<string> dir;
	vector<string>::iterator it;
	cin>>input;
	len = input.length();
	for(i = 0; i < len; i++)
	{
		if(input[i] == '/')
		{
			j = i + 1;
			while(j < len && input[j] != '/')
			{
				j++;
			}
			if(i + 1 < len)
			{
				str = input.substr(i+1, j-i-1);
				if(str == "..")
				{
					if(!dir.empty())
						dir.pop_back();
				}
				else if(str == ".")
				{
					;
				}
				else if(!str.empty())
				{
					dir.push_back(str);
				}
			}
			i = j - 1;
		}
	}
	if(dir.empty())
		cout<<"/";
	else
	{
		for(it = dir.begin(); it != dir.end(); it++)
			cout<<"/"<<(*it);
	}
	cout<<endl;
	return 0;
}
