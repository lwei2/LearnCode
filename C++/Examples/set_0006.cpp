/*************************************************************************
    > File Name: set_0006.cpp
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
	set<int> s(a,a+3);
	set<int>::iterator it;
	if((it = s.find(2)) != s.end())
		cout<<*it<<endl;
	return 0;
}

