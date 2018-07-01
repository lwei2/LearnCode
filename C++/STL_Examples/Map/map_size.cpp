/*************************************************************************
    > File Name: map_size.cpp
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
	myMap['a'] = 101;
	myMap['b'] = 202;
	myMap['c'] = 303;
	cout<<"size:"<<myMap.size()<<endl;

	return 0;
}
