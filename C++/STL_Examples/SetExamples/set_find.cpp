
#include <iostream>
#include <set>

using namespace std;

int main(int argc,char *argv[])
{
	set<int>myset;
	for(int i = 1; i <= 5; i++)
		myset.insert(i*10);
	set<int>::iterator it;

	it = myset.find(20);
	myset.erase(it);

	for(it = myset.begin();it!=myset.end();++it)
		cout<<*it<<endl;

	return 0;
}
