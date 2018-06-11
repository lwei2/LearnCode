
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	myset.insert(20);
	myset.insert(30);
	myset.insert(10);

	while(!myset.empty())
	{
		cout<<' '<<*myset.begin();
		myset.erase(myset.begin());
	}
	cout<<endl;
	return 0;
}

