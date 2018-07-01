/*************************************************************************
    > File Name: String_compare.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;
int main(void)
{
  	string str("green apple");
	string str1("red apple");
	if(str.compare(str1)!=0)
	  cout<<str<<"is not"<<str1<<endl;
	if(str.compare(6,5,"apple")==0)
	  cout<<"still,"<<str<<"is an apple"<<endl;
	if(str1.compare(str1.size()-5,5,"apple")==0)
	  cout<<"and"<<str1<<"is also an apple"<<endl;
	if(str.compare(6,4,str1,4,5)==0)
	  cout<<"therefore,both are apples"<<endl;

	return 0;
}
