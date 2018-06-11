

#include<iostream>
#include<set>

using namespace std;

int main(int argc,char *argv[])
{
	set<int> myset;
	for(int i = 0; i <= 5; i++)
		myset.insert(i*3);
	for(int i = 0; i < 10; ++i)
	{
		cout<<i;
		if(myset.count(i)!=0)
			cout<<"is an element of myset."<<endl;
		else
			cout<<"is not an element of myset."<<endl;
	}
	return 0;
}
