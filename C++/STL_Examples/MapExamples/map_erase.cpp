/*************************************************************************
    > File Name: map_erase.cpp
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
	map<char,int>::iterator it ;
	mymap['a'] = 10;
	mymap['b'] = 20;
	mymap['c'] = 30;
	mymap['d'] = 40;
	mymap['e'] = 50;
	mymap['f'] = 60;
	it = mymap.find('b');
	mymap.erase(it);
	mymap.erase('c');

	it = mymap.find('e');
	mymap.erase(it,mymap.end());

	for(it=mymap.begin();it!=mymap.end();++it)
	  cout<<it->first<<"==>"<<it->second<<endl;
	return 0;
}
