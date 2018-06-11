
#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(void)
{
	set<string>myset;
	auto it = myset.cbegin();
	myset.emplace_hint(it,"alpha");
	it = myset.emplace_hint(myset.cend(),"omerga");
	it = myset.emplace_hint(it,"epsilon");
	it = myset.emplace_hint(it,"beta");

	for(const string &x : myset)
		cout<<' '<<x;

		cout<<endl;
	return 0;
}
