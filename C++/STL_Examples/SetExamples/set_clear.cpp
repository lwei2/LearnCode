
#include<iostream>
#include<set>

using namespace std;

int main(int argc,char *argv[])
{
	set<int>myset;
	myset.insert(10);
	myset.insert(20);
	myset.insert(30);
	myset.insert(40);
	myset.insert(50);
	for(set<int>::iterator it = myset.begin();it!=myset.end();++it)
		cout<<*it<<endl;
	cout<<"size:"<<myset.size()<<endl;
	myset.clear();
	myset.insert(60);
	myset.insert(70);
	myset.insert(80);
	set<int>::iterator iter = myset.begin();
	while(iter!=myset.end())
	{
		cout<<*iter<<endl;
		++iter;
	}
	return 0;
}
