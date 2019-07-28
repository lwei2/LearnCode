#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void)
{
	map<int,string>mapStudent;
	mapStudent.insert(pair<int,string>(1,"one"));
	mapStudent.insert(pair<int,string>(2,"two"));
	mapStudent.insert(pair<int,string>(3,"three"));
	mapStudent.insert(pair<int,string>(4,"fours"));
	mapStudent.insert(pair<int,string>(5,"five"));

	map<int,string>::iterator iter;

	iter = mapStudent.find(1);

	if(iter!=mapStudent.end())
		cout<<"Find,the value is"<<' '<<iter->second<<endl;
	else
		cout<<"Do not Find"<<endl;
	return 0;
}
