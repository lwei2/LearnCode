/*************************************************************************
    > File Name: set_0005.cpp
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
	set<int>::const_iterator it;
	set<int>::iterator first;
	set<int>::iterator second;
	for(int i = 1; i <= 10; ++i)
		s.insert(i);
	s.erase(s.begin());
	first = s.begin();
	second = s.begin();
	second++;
	second++;
	s.erase(first, second);
	s.erase(8);
	cout<<"the set:";
	for(it = s.begin(); it != s.end(); ++it)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}

