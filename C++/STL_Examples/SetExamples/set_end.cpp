
#include <iostream>
#include <set>

using namespace std;

int main(int argc,char *argv[])
{	
	set<int>myset;
	myset.insert(10);
	myset.insert(20);
	myset.insert(30);
	set<int>::iterator it;
	for(it = myset.begin(); it!=myset.end();++it)
		cout<<*it<<endl;

	return 0;
}
