
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	set<int>::iterator it;
	pair<set<int>::const_iterator,bool> iter;

	for(int i = 0; i < 5; i++)
		myset.insert(i*10);

	iter = myset.insert(20);

	if(iter.second == false)
		it = iter.first;
	
	myset.insert(it,25);
	myset.insert(it,24);
	myset.insert(it,26);

	int myints[] = {5,10,15};

	myset.insert(myints,myints+3);

	for(it = myset.begin();it!=myset.end();++it)
		cout<<*it<<endl;
	

	return 0;
}
