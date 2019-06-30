/*************************************************************************
    > File Name: Pro1073.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cctype>

using namespace std;

string src, dest, start, end;
char sa[5001], sb[5001];
void readContent(string &s)
{
	s.clear();
	string ts;
	while(getline(cin,ts))
	{
		if(ts!="END")
		{
			s += ts;
			s += "\n";
		}
		else
			break;
	}
}

void judge(const string &src, const string &dest, bool &af, bool &pf, bool &wf)
{
	af = pf = wf =false;
	if(src == dest)
	{
		af = true;
		return;
	}
	pf = true;
	int pos = 0;
	for(int i = 0; i < src.length(); ++i)
	{
		if(!isspace(src[i]))
			sa[pos++] = src[i];
	}
	sa[pos] = 0;
	pos = 0;
	for(int i = 0; i < dest.length(); ++i)
	{
		if(!isspace(dest[i]))
		{
			sb[pos++] = dest[i];
		}
	}
	sb[pos] = 0;
	string sa_s,sb_s;
	sa_s = sa;
	sb_s = sb;
	if(sa_s.compare(sb_s)!=0)
	{
		wf = true;
	}
}

int main(void)
{
	int t;
	bool af,pf,wf;
	cin>>t;
	while(t--)
	{
		cin>>start;
		readContent(src);
		cin>>start;
		readContent(dest);
		judge(src,dest,af,pf,wf);
		if(af)
			cout<<"Accepted"<<endl;
		else if(wf)
			cout<<"Wrong Answer"<<endl;
		else
			cout<<"Presentation Error"<<endl;
	}
	return 0;
}
