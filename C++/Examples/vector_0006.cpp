/*************************************************************************
    > File Name: vector_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vInt;
	for(int i = 0; i < 20; i++)
	{
		vInt.push_back(i+1);
		cout<<vInt.capacity()<<" ";
	}
	cout<<endl;
	vector<int> v1(vInt);

	cout<<"v1.size="<<v1.size()<<endl;
	cout<<"vInt.size="<<vInt.size()<<endl;
	cout<<"vInt.capacity="<<vInt.capacity()<<endl;
	cout<<"v1.capacity="<<v1.capacity()<<endl;

	for(int i = 0; i < 20; i++)
	{
		vInt.pop_back();
	}
	cout<<vInt.capacity()<<endl;

	return 0;
}
