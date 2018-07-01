


#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,int>myMap;
	myMap[1] = 10;
	myMap[2] = 20;
	myMap[3] = 30;
	myMap[4] = 40;
	myMap[5] = 50;

	map<int,int>::const_iterator it;
	for(it = myMap.cbegin();it!=myMap.cend();++it)
		cout<<it->first<<","<<it->second<<endl;
	return 0;
}