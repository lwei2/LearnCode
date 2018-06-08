

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<string,int>myMap;
	myMap["A"] = 100;
	myMap["B"] = 200;
	myMap["C"] = 300;

	map<string,int>::iterator it = myMap.crbegin();
	while(it!=myMap.crend())
	{
		cout<<it->first<<","<<it->second<<endl;
		++it;
	}

	return 0;
}
