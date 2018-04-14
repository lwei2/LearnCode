/*************************************************************************
    > File Name: String_begin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member functions begin 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Test string");
	string ::iterator iter;
	for(iter = str.begin();iter!=str.end();++iter)
	  	cout<<*iter<<endl;

	return 0;
}
