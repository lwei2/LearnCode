
#include<iostream>
#include<set>

using namespace std;

int main(int argc,char *argv[])
{
	int a[5] = {1,2,3,4,5};
	set<int>myset(a,a+5);
	for(set<int>::const_iterator it = myset.cbegin();it!=myset.cend();++it)
	{
		cout<<*it<<endl;
	}

	return 0;
}
