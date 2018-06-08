


#include <iostream>
#include <map>

using namespace std;

int main(int argc,char *argv[])
{
	map<int,double>stdMap;
	stdMap[1] = 99.9;
	stdMap[2] = 80.0;
	stdMap[3] = 98.0;

	map<int,double>::iterator it;
	for(it = stdMap.begin();it!=stdMap.end();it++)
	{
		cout<<it->first<<","<<it->second<<endl;
	}
	return 0;
}