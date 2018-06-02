/*************************************************************************
    > File Name: list_splice.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;


int main(void)
{
	list<int>mylist1,mylist2;
	list<int>::iterator it;
	for(int i = 1; i <= 4; ++i)
	  mylist1.push_back(i);
	for(int i = 1; i <= 3; ++i)
	  mylist2.push_back(i*10);
	it = mylist1.begin();
	++it;
	mylist1.splice(it,mylist2);
	mylist2.splice(mylist2.begin(),mylist1,it);

	it=mylist1.begin();
	advance(it,3);
	mylist1.splice(mylist1.begin(),mylist1,it,mylist1.end());
	for(it=mylist1.begin();it!=mylist1.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	for(it=mylist2.begin();it!=mylist2.end();++it)
	  cout<<endl;
	cout<<endl;
	return 0;
}
