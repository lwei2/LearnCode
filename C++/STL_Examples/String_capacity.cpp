/*************************************************************************
    > File Name: String_capacity.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member functions capacity 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Test string");
	cout<<"str:"<<str<<endl;
	cout<<"size:"<<str.size()<<endl;
	cout<<"length:"<<str.length()<<endl;
	cout<<"capacity:"<<str.capacity()<<endl;
	cout<<"max_size:"<<str.max_size()<<endl;
	return 0;
}
