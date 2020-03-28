/*************************************************************************
    > File Name: Pro1077_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
	int n,m;
	cin>>n>>m;
	int i = 0;
	int s,t;
	unordered_map<int,int> p,q;
	while(i < m)
	{
		cin>>s>>t;
		if(((p.find(s)!=p.end())&&(p.find(t)!=p.end()))||((q.find(s)!=q.end())&&(q.find(t)!=q.end())))
		{
			cout<<"No";
			return 0;
		}
		else if(p.find(s)!=p.end())
			q.insert({t,i});
		else if(p.find(t)!=p.end())
			q.insert({s,i});
		else if(q.find(s)!=q.end())
			p.insert({t,i});
		else if(q.find(t)!=q.end())
			p.insert({s,i});
		else
		{
			p.insert({s,i});
			q.insert({t,i});
		}
		i++;
	}
	cout<<"Yes";
	return 0;
}
