

#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myints;
	cout<<"0.size:"<<myints.size()<<endl;
	for(int i = 0; i < 10; i++)
		myints.insert(i);
	cout<<"1.size:"<<myints.size()<<endl;

	myints.insert(100);
	cout<<"2.size:"<<myints.size()<<endl;

	myints.erase(5);
	cout<<"3.size:"<<myints.size()<<endl;

	return 0;
}
