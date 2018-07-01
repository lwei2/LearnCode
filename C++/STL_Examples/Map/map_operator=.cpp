/*************************************************************************
    > File Name: map_operator=.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(int argc,char *argv[])
{
  	map<int,int>first;
	map<int,int>second;

	first[1] = 1;
	first[2] = 2;
	first[3] = 3;
	second = first;
	first = map<int,int>();
	cout<<"first size:"<<first.size()<<endl;
	cout<<"second size:"<<second.size()<<endl;

	return 0;
}
