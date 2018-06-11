

#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	set<int>::iterator itlow,itup;
	for(int i = 1; i < 10; i++)
		myset.insert(i*10);
	itlow = myset.lower_bound(30);
	itup = myset.upper_bound(60);

	myset.erase(itlow,itup);
	for(set<int>::iterator it = myset.begin();it!=myset.end();++it)
		cout<<' '<<*it;
		cout<<endl;

	return 0;
}
