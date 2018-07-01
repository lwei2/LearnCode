/*************************************************************************
    > File Name: map_equal_range.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(void)
{
  	map<char,int>mymap;
	mymap['a'] = 10;
	mymap['b'] = 20;
	mymap['c'] = 30;
	pair<map<char,int>::iterator,map<char,int>::iterator> ret;
	ret = mymap.equal_range('b');
	cout<<ret.first->first<<"-->"<<ret.first->second<<endl;
	cout<<ret.second->first<<"-->"<<ret.second->second<<endl;

	return 0;
}
