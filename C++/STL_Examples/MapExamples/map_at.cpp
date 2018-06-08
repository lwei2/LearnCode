


#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
	map<string,int>myMap ={{"A",1},{"B",2},{"C",3}};

	myMap.at("A") = 10;
	myMap.at("B") = 20;
	myMap.at("C") = 30;

	map<string,int>::iterator it = myMap.begin();
	while(it!=myMap.end())
	{
		cout<<it->first<<","<<it->second<<endl;
		++it;
	}

	return 0;
}