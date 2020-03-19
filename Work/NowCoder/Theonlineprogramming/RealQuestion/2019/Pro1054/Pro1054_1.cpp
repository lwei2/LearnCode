/*************************************************************************
    > File Name: Pro1054_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <map>
#include <string> 
#include <algorithm>

using namespace std;

int tmp = 0, number;
map<string, int> num;
vector<string> temp, name;

void dfs(string &str, int n)
{
	string s;
	if(n == number)
	{
		s = temp[0];
		for(int i = 1; i < temp.size(); i++)
		{
			s += ' ';
			s += temp[i];
		}
		name.push_back(s);
		tmp++;
		return;
	}
	for(int i = number; i >= n; i--)
	{
		s = str.substr(n, i - n + 1);
		if(num.find(s) != num.end())
		{
			temp.push_back(s);
			dfs(str, i + 1);
			temp.pop_back();
		}
		;
	}
}

int main(void)
{
	string s;
	string str1, str2;
	getline(cin,s);
	
	int ind1, ind2;
	ind1 = s.find('"',0);
	ind2 = s.find('"',ind1 + 1);
	str1 = s.substr(ind1 + 1, ind2 - ind1 - 1);
	getline(cin, s);
	ind1 = s.find('"', 0);
	str2 = s.substr(ind1 + 1);
	s.clear();
	number = str1.size();
	for(int i = 0; i < str2.size(); i++)
	{
		if(str2[i] == '"')
		{
			num[s] = 1;
			s.clear();
		}
		else if(str2[i] == ',')
		{
			i++;
		}
		else
			s += str2[i];
	}
	dfs(str1, 0);
	cout<<'[';
	if(name.size() > 0)
		cout<<name[0];
	for(int i = 1; i < name.size(); i++)
		cout<<", "<<name[i];
	cout<<']'<<endl;
	return 0;
}
