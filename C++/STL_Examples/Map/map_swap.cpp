/*************************************************************************
    > File Name: map_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;


int main(int argc,char *argv[])
{
  	map<char,int> foo,bar;
	foo['x'] = 100;
	foo['y'] = 200;

	bar['a'] = 11;
	bar['b'] = 22;
	bar['z'] = 33;
	foo.swap(bar);

	for(map<char,int>::iterator it = foo.begin();it!=foo.end();++it)
	  cout<<it->first<<"-->"<<it->second<<endl;
	for(map<char,int>::iterator it = bar.begin();it!=bar.end();++it)
	  cout<<it->first<<"-->"<<it->second<<endl;

	return 0;
}
