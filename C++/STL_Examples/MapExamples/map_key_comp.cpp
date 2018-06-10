/*************************************************************************
    > File Name: map_key_comp.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(void)
{
  	map<char,int>myMap;
	map<char,int>::key_compare mycomp = myMap.key_comp();
	myMap['a'] = 100;
	myMap['b'] = 200;
	myMap['z'] = 300;
	char highest = myMap.rbegin()->first;
	map<char,int>::iterator it = myMap.begin();
	do{
		cout<<it->first<<"-->"<<it->second<<endl;

	}while(mycomp((*it++).first,highest));
	return 0;
}
