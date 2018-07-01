

#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	map<int,int>myMap;
	myMap.insert(pair<int,int>(1,100));
	myMap.insert(make_pair<int,int>(2,99));
	myMap.insert(map<int,int>::value_type(3,98));
	map<int,int>::const_reverse_iterator it = myMap.crbegin();
	while(it!=myMap.crend())
	{
		cout<<it->first<<":"<<it->second<<endl;
		++it;
	}
	return 0;
}