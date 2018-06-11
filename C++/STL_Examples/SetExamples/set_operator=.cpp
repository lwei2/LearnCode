
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int myints[] = {10,20,30,40,50};
	set<int>first(myints,myints+5);
	set<int>second;
	second = first;
	first = set<int>();
	cout<<"size of first:"<<int(first.size())<<endl;
	cout<<"size of second:"<<int(second.size())<<endl;

	return 0;
}
