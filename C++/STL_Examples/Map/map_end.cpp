

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,int>myMap;
	myMap[1] = 100;
	myMap[2] = 200;
	myMap[3] = 300;
	for(map<int,int>::iterator it = myMap.begin();it!=myMap.end();++it)
	{
		cout<<it->first<<","<<it->second<<endl;
	}
	return 0;
}