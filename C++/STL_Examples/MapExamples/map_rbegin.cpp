/*************************************************************************
    > File Name: map_rbegin.cpp
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
	myMap['x'] = 100;
	myMap['y'] = 200;
	myMap['z'] = 300;
	map<char,int>::reverse_iterator it;
	for(it=myMap.rbegin();it!=myMap.rend();++it)
	  cout<<it->first<<"-->"<<it->second<<endl;

	return 0;
}	
