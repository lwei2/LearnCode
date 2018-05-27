/*************************************************************************
    > File Name: vector_operator=.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  	vector<int> foo(3,0);
	vector<int> bar(5,0);
	bar =foo;
	foo = vector<int>();
	cout<<"size:"<<int(foo.size())<<endl;
	cout<<"size:"<<int(bar.size())<<endl;


	return 0;
}
