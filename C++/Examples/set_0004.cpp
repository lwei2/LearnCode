/*************************************************************************
    > File Name: set_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> s;
	set<int>::iterator it;
	for(int i = 1; i <= 5; i++)
		s.insert(i);
	for(it = s.begin(); it != s.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
	pair<set<int>::const_iterator, set<int>::const_iterator> p;
	p = s.equal_range(3);
	cout<<">= 3 :"<<*p.first<<endl;
	cout<<">3:"<<*p.second<<endl;
	return 0;
}

