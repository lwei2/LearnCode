
#include <iostream>
#include <set>

using namespace std;

int main(void)
{	
	int myinst[] = {21,64,17,78,49};
	set<int>myset(myinst,myinst+5);
	set<int>::reverse_iterator it;
	for(it = myset.rbegin();it!=myset.rend();++it)
		cout<<' '<<*it<<endl;
		
	return 0;
}
