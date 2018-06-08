


#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<string,int>myMap;
	myMap.emplace("xiaoxian",100);
	myMap.emplace("ajin",89);
	map<string,int>::iterator it = myMap.begin();
	while(it!=myMap.end())
	{
		cout<<it->first<<":"<<it->second<<endl;
		++it;
	}
	return 0;
}