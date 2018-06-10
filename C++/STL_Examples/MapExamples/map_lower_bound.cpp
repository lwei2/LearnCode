/*************************************************************************
    > File Name: map_lower_bound.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(int argc,char *argv[])
{
  	map<int,int>myMap;
	map<int,int>::iterator itlow,itup;
	myMap[1] = 1;
	myMap[2] = 2;
	myMap[3] = 3;
	myMap[4] = 4;
	myMap[5] = 5;

	itlow = myMap.lower_bound(3);
	itup = myMap.upper_bound(5);
	myMap.erase(itlow,itup);
	for(map<int,int>::iterator it = myMap.begin();it!=myMap.end();++it)
	  cout<<it->first<<"-->"<<it->second<<endl;
	return 0;
}
