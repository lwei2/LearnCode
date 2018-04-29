/*************************************************************************
    > File Name: String_rend.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Iloveyou");
	string::reverse_iterator iter;
	for(iter=str.rbegin();iter!=str.rend();++iter)
	  cout<<*iter;
	cout<<endl;
	return 0;
}
