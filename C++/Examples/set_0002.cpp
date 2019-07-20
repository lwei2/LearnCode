/*************************************************************************
    > File Name: set_0002.cpp
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
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(1);
	cout<<"size:"<<s.size()<<endl;
	cout<<"maxsize:"<<s.max_size()<<endl;
	cout<<"first:"<<*s.begin()<<endl;
	cout<<"end:"<<*s.end()<<endl;

	s.clear();
	if(s.empty())
		cout<<"set is null"<<endl;
	cout<<"size:"<<s.size()<<endl;
	cout<<"maxsize:"<<s.max_size()<<endl;
	return 0;
}

