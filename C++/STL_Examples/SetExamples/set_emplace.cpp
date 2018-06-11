

#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(void)
{
	set<string>myset;
	myset.emplace("foo");
	myset.emplace("bar");
	auto ret = myset.emplace("foo");
	if(!ret.second)
		cout<<"foo already exists in set"<<endl;

	return 0;
}
