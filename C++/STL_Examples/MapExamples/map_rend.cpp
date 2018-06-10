/*************************************************************************
    > File Name: map_rend.cpp
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
	myMap['i'] = 101;
	myMap['j'] = 202;
	myMap['z'] = 303;
	map<char,int>::reverse_iterator it;
	for(it=myMap.rbegin();it!=myMap.rend();++it)
	  cout<<it->first<<"-->"<<it->second<<endl;

	return 0;
}
