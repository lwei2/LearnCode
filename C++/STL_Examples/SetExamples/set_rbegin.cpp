
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	myset.insert(10);
	myset.insert(20);
	myset.insert(30);

	set<int>::reverse_iterator it;
	for(it = myset.rbegin(); it!=myset.rend();++it)
		cout<<' '<<*it;
	cout<<endl;

	return 0;
}
