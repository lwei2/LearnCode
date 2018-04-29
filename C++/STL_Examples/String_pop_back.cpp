/*************************************************************************
    > File Name: String_pop_back.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  string str("test string.");
  cout<<str.length()<<endl;
  str.pop_back();
  cout<<str<<endl;
  cout<<str.length()<<endl;
  return 0;
}
