/*************************************************************************
    > File Name: list_remove_if.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

bool single_digit(const int & value)
{
	return value<10;
}
struct is_odd{
	bool operator()(const int &value)
	{
		return (value%2) == 1;
	}
};

int main(void)
{
  	int myints[] = {15,36,7,17,20,39,4,1};
	list<int>mylist(myints,myints+8);
	mylist.remove_if(single_digit);
	mylist.remove_if(is_odd());
	list<int>::iterator it ;
	for(it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
