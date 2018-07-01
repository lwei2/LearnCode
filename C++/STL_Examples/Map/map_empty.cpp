

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,int>myMap;
	myMap[1] = 100;
	myMap[2] = 200;
	myMap[3] = 300;

	while(!myMap.empty())
	{
		cout<<(myMap.begin())->first<<","<<(myMap.begin())->second<<endl;
		myMap.erase(myMap.begin());
	}
	cout<<"size:"<<myMap.size()<<endl;
	return 0;
}