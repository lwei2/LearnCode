/*************************************************************************
    > File Name: set_0003.cpp
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
	cout<<"count the one:"<<s.count(1)<<endl;
	cout<<"count the four:"<<s.count(4)<<endl;
	return 0;
}
