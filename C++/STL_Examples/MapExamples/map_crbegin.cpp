

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<string,int>myMap;
	myMap["A"] = 100;
	myMap["B"] = 200;
	myMap["C"] = 300;

	map<string,int>::const_reverse_iterator it;
	for(it = myMap.crbegin();it!=myMap.crend();++it)
	{
		cout<<it->first<<","<<it->second<<endl;
	}

	return 0;
}
