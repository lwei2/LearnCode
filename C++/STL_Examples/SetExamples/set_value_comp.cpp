
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	set<int>::value_compare mycomp = myset.value_comp();
	for(int i = 0; i <= 5; i++)
		myset.insert(i);
	int highest = *myset.rbegin();
	set<int>::iterator it = myset.begin();
	do{
		cout<<' '<<*it;
	}while(mycomp(*(++it),highest));
	cout<<endl;

	return 0;
}
