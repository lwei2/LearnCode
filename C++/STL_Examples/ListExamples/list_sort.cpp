/*************************************************************************
    > File Name: list_sort.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include<cctype>

using namespace std;

bool compare_nocase(const string &first,const string &second)
{
	unsigned int i = 0;
	while((i<first.length())&&(i<second.length()))
	{
		if(tolower(first[i])<tolower(second[i]))
		  return true;
		else if(tolower(first[i])>tolower(second[i]))
		  return false;
		++i;
	}
	return (first.length() < second.length());
}
int main(void)
{
	list<string>mylist;
	list<string>::iterator it;
	mylist.push_back("one");
	mylist.push_back("two");
	mylist.push_back("three");
	mylist.sort();
	for(it=mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;
	return 0;
}
