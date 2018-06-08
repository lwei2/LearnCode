


#include <iostream>
#include <map>

using namespace std;

int main(int arg,char *argv[])
{	
	map<char,int>myMap;
	myMap['b'] = 2;
	myMap['a'] = 1;
	myMap['c'] = 3;

	map<char,int>::const_iterator it;
	for(it = myMap.cbegin();it!=myMap.cend();++it)
	{
		cout<<it->first<<","<<it->second<<endl;
	}
	return 0;
}