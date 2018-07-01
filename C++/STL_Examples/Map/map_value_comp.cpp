/*************************************************************************
    > File Name: map_value_comp.cpp
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
	myMap['x'] = 1001;
	myMap['y'] = 2002;
	myMap['z'] = 3003;

	std::pair<char,int> hightest = *myMap.rbegin();
	std::map<char,int>::iterator it = myMap.begin();

	do{
		cout<<it->first<<"=>"<<it->second<<endl;
	}while(myMap.value_comp()(*it++,hightest));
	return 0;
}
