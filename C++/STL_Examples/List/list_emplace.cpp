/*************************************************************************
    > File Name: list_emplace.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main(void)
{
  	list<pair<int,char>>mylist;
	mylist.emplace(mylist.begin(),100,'x');
	mylist.emplace(mylist.begin(),200,'y');
	list<pair<int,char>>::iterator it;
	for(auto& x:mylist)
	  cout<<"("<<x.first<<","<<x.second<<")";

	cout<<endl;

	return 0;
}
