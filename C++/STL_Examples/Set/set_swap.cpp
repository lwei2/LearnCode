
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int myints[] = {2,4,5,6,7};
	set<int>first(myints,myints+3);
	set<int>second(myints+3,myints+5);

	first.swap(second);
	for(set<int>::iterator it = first.begin(); it!=first.end();it++)
		cout<<' '<<*it;
	for(set<int>::iterator it =second.begin(); it!=second.end();++it)
		cout<<' '<<*it;
	cout<<endl;

	return 0;
}
