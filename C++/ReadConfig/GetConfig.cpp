/*************************************************************************
    > File Name: GetConfig.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<fstream>
#include"GetConfig.h"

using namespace std;

bool IsSpace(char c)
{
	if(' ' == c || '\t' == c)
	{
			return true;
	}
	return false;
}
bool IsCommentChar(char c)
{
	if(c == COMMENT_CHAR)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Trim(string &str)
{
	if(str.empty())
	{
		return ;
	}
	int i;
	int start_pos;
	int end_pos;
	for(i = 0; i < str.size(); ++i)
	{
		if(!IsSpace(str[i]))
		{
				break;
		}
	}
	if(i == str.size())
	{
		str="";
		return ;
	}
	start_pos = i;
	for(i=str.size() - 1;i >= 0; --i)
	{
		if(!IsSpace(str[i]))
		{
			break;
		}
	}
	end_pos = i;
	str = str.substr(start_pos, end_pos - start_pos + 1);
}

bool AnalyseLine(const string &line, string &key, string &value)
{
	if(line.empty())
			return false;
	int pos;
	int start_pos = 0;
	int end_pos = line.size() - 1;
	if((pos == line.find(COMMENT_CHAR)) != -1)
	{
		if(0 == pos)
		{
			return false;
		}
		end_pos = pos - 1;
	}
	string new_line = line.substr(start_pos, start_pos + 1 -end_pos);
	if((pos = new_line.find('=')) == -1)
			return false;
	key = new_line.substr(0,pos);
	value = new_line.substr(pos+1,end_pos + 1 - (pos + 1));
	Trim(key);
	if(key.empty())
	{
		return false;
	}
	Trim(value);
	return true;
}

bool ReadConfig(const string &filename, map<string, string> &m)
{
	m.clear();
	ifstream infile(filename.c_str());
	if(!infile)
	{
		cout<<"file open error"<<endl;
		return false;
	}
	string line, key,value;
	while(getline(infile, line))
	{
		if(AnalyseLine(line,key,value))
		{
			m[key] = value;
		}
	}
	infile.close();
	return true;
}

void PrintConfig(const map<string, string> &m)
{
	map<string, string>::const_iterator iter;
	for(iter =m.begin(); iter!=m.end();++iter)
	{
		cout<<iter->first<<"="<<iter->second<<endl;	
	}
}

int main(void)
{
	string m_sPath = "./test.conf";
	map<string,string> m_mapConfig;
	ReadConfig(m_sPath,m_mapConfig);
	PrintConfig(m_mapConfig);
	return 0;
}

