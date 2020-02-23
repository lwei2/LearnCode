/*************************************************************************
    > File Name: test_0032.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <forward_list>
using namespace std;

int main(void)
{
	forward_list<int> numbers = {
		1,2,3,4,5,4,4
	};
	for(auto it : numbers)
	{
		cout<<it<<endl;
	}
	numbers.remove(4);
	cout<<"remove after..."<<endl;
	for(auto it : numbers)
	{
		cout<<it<<endl;
	}
	return 0;
}
