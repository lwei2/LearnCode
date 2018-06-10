/*************************************************************************
    > File Name: map_operator[].cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main(void)
{
  	map<char,string>myMap;
	myMap['a'] = "an element";
	myMap['b'] = "another element";
	myMap['c'] = myMap['b'];

	cout<<myMap['a']<<endl;
	cout<<myMap['b']<<endl;
	cout<<myMap['c']<<endl;
	cout<<myMap['b']<<endl;
	cout<<myMap.size()<<endl;

	return 0;
}
