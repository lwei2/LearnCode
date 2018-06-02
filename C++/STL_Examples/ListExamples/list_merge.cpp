/*************************************************************************
    > File Name: list_merge.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

bool mycomparison(double first,double second)
{
	return (int(first)<int(second));
}	

int main(void)
{
  	list<double> first,second;
	first.push_back(3.1);
	first.push_back(2.2);
	first.push_back(2.9);

	second.push_back(3.7);
	second.push_back(7.1);
	second.push_back(1.4);
	first.sort();
	second.sort();
	first.merge(second);
	second.push_back(2.1);
	first.merge(second,mycomparison);

	list<double>::iterator it;
	for(it=first.begin();it!=first.end();++it)
	  cout<<' '<<*it;
	cout<<endl;


	return 0;
}
