

#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,int>myMap;
	myMap.insert(pair<int,int>(1,100));
	myMap.insert(make_pair<int,int>(2,200));
	myMap.insert(map<int,int>::value_type(3,300));
	map<int,int>::iterator it = myMap.begin();
	while(it!=myMap.end())
	{
		cout<<"i="<<it->first<<","<<"value="<<it->second<<endl;
		++it;
	}	
	return 0;
}