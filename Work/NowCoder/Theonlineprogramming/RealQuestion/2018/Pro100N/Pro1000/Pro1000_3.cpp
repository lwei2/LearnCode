/*************************************************************************
    > File Name: Pro1000_3.cpp
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
	string tmp;
	vector<string> paths;
	for(char c; cin.get(c);)
	{
		if(c == '/')
		{
			if(tmp.empty() || tmp == ".")
				goto cls;
			if(tmp == "..")
			{
				if(!paths.empty())
					paths.pop_back();
			}
			else
				paths.emplace_back(move(tmp));
cls:
			tmp.clear();
		}
		else
			tmp.push_back(c);
	}
	cout<<'/';
	auto iter = cbegin(paths), last = cend(paths);
	for(iter!=last)
		cout<<*iter++;
	for(; iter!=last; ++iter)
		cout<<'/'<<*iter;
	return 0;
}
