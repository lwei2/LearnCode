/*************************************************************************
    > File Name: map_find.cpp
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
	map<char,int>::iterator it;
	mymap['a'] = 50;
	mymap['b'] = 100;
	mymap['c'] = 150;
	mymap['d'] = 200;
	it = mymap.find('b');
	if(it!=mymap.end())
	  mymap.erase(it);

	cout<<"a-->"<<mymap.find('a')->second<<endl;
	cout<<"b-->"<<mymap.find('c')->second<<endl;
	cout<<"c-->"<<mymap.find('d')->second<<endl;

	return 0;
}
