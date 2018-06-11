
#include<iostream>
#include<set>

using namespace std;

int main(int argc,char *argv[])
{
	int a[6] = {10,20,80,90,100,30};
	set<int>myset(a,a+6);
	for(set<int>::const_iterator it = myset.cbegin();it!=myset.cend();++it)
	{
		cout<<*it<<endl;
	}
	return 0;
}
