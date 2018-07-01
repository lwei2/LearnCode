


#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,int>myMap;
	myMap[1] = 100;
	myMap[2] = 200;
	myMap[3] = 300;
	myMap[4] = 400;
	myMap[5] = 500;

	map<int,int>::iterator it = myMap.begin();
	myMap.emplace_hint(myMap.end(),6,666);

	while(it!=myMap.end())
	{		
		cout<<"i="<<it->first<<","<<"value="<<it->second<<endl;
		++it;
	}
	return 0;
}