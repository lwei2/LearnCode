/*************************************************************************
    > File Name: set_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> s;
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	set<int>::iterator it;
	for(it = s.begin(); it!=s.end(); it++)
		printf("%d\n",*it);
	cout<<"s.begin:"<<*s.begin()<<endl;
	cout<<"lower:"<<*s.lower_bound(3)<<endl;
	cout<<"upper:"<<*s.upper_bound(3)<<endl;
	cout<<"find:"<<*s.find(3)<<endl;
	cout<<"s.size:"<<s.size()<<endl;
	return 0;
}
