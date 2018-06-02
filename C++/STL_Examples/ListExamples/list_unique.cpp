/*************************************************************************
    > File Name: list_unique.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<list>

using namespace std;

bool same_integral_part(double first,double second)
{
	return int(first) == int(second) ;
}
struct is_near
{
	bool operator()(double first,double second)
	{
		return fabs(first - second)<5.0;
	}
};

int main(void)
{
  	double mydoubles[] = {12.15,2.72,73.0,12.77,3.14,12.77,73.35,72.25,15.3,72.25};
	list<double>mylist(mydoubles,mydoubles+10);
	mylist.sort();
	mylist.unique();
	mylist.unique(same_integral_part);
	mylist.unique(is_near());
	for(list<double>::iterator it = mylist.begin();it!=mylist.end();++it)
	  cout<<' '<<*it;
	cout<<endl;

	return 0;
}
