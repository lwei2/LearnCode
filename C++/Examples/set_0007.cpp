/*************************************************************************
    > File Name: set_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int a[] = {1,2,3};
	set<int> s;
	set<int>::iterator it;
	s.insert(a,a+3);
	for(it = s.begin(); it != s.end(); ++it)
		cout<<*it<<" ";
	cout<<endl;
	pair<set<int>::iterator,bool> p;
	p = s.insert(5);
	if(p.second)
		cout<<*p.first<<endl;
	return 0;
}

