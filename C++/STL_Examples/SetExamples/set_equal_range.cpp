
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	for(int i = 0; i<=5; ++i)
		myset.insert(i*10);
	pair<set<int>::const_iterator,set<int>::const_iterator> it;
	it = myset.equal_range(30);
	cout<<"the lower bound points to "<<*it.first<<endl;
	cout<<"the upper bound points to "<<*it.second<<endl;
	return 0;
}
