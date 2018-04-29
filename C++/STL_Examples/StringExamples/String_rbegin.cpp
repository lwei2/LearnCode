/*************************************************************************
    > File Name: String_rbegin.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string str("now step live...");
	std::string::reverse_iterator iter;
	for(iter=str.rbegin();iter!=str.rend();++iter)
		cout<<*iter<<endl;
	return 0;
}
