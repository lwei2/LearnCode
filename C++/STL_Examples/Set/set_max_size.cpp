

#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int i;
	set<int>myset;
	if(myset.max_size()>1000)
	{
		for(i = 0; i < 1000; i++)
			myset.insert(i);
		cout<<"The set contains 1000 elements"<<endl;
	}
	cout<<"The set could not hold 1000 elements"<<endl;

	return 0;
}
