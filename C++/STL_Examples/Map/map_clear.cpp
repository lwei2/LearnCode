

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<string,int>myMap;
	myMap["A"] = 100;
	myMap["B"] = 95;
	myMap["C"] = 80;
	map<string,int>::iterator it;
	for(it = myMap.begin();it!=myMap.end();it++)
	{
		cout<<it->first<<","<<it->second<<endl;
	}
	myMap.clear();
	myMap["A"] = 99;
	myMap["B"] = 88;
	it = myMap.begin();
	while(it!=myMap.end())
	{
		cout<<it->first<<","<<it->second<<endl;
		++it;
	}
	return 0;
}