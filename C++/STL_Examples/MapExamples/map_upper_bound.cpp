/*************************************************************************
    > File Name: map_upper_bound.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(int argc,char *argv[])
{
  	map<char,int>myMap;
	map<char,int>::iterator itlow,itup;
	myMap['a'] = 20;
	myMap['b'] = 40;
	myMap['c'] = 60;
	myMap['d'] = 80;
	myMap['e'] = 100;
	
	itlow = myMap.lower_bound('b');
	itup = myMap.upper_bound('d');

	myMap.erase(itlow,itup);
	for(map<char,int>::iterator it = myMap.begin();it!=myMap.end();++it)
	  cout<<it->first<<"==>"<<it->second<<endl;

	return 0;
}
