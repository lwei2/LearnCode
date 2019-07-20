/*************************************************************************
    > File Name: set_0008.cpp
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
	s.insert(3);
	s.insert(4);
	cout<<*s.lower_bound(2)<<endl;
	cout<<*s.lower_bound(3)<<endl;
	cout<<*s.upper_bound(3)<<endl;
	return 0;
}
