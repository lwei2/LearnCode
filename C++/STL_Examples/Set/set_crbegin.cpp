
#include <iostream>
#include <set>

using namespace std;

int main(int argc,char *argv[])
{
	set<int>myset;
	for(int i = 0; i < 6; ++i)
	{
		myset.insert(i);
	}
	set<int>::const_reverse_iterator it = myset.crbegin();
	for(;it!=myset.crend();++it)
		cout<<*it<<endl;

	return 0;
}
