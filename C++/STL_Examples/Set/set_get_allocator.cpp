

#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int>myset;
	int *p;
	unsigned int i;
	p = myset.get_allocator().allocate(5);

	for(i = 0; i < 5; i++)
		p[i] = (i+1)*10;
	
	for(i = 0; i < 5; i++)
		cout<<' '<<p[i];	
	cout<<endl;
	myset.get_allocator().deallocate(p,5);

	return 0;
}
