/*************************************************************************
    > File Name: String_clear.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description:String member function clear 
 ************************************************************************/

#include<string>
#include<iostream>

using namespace std;

int main(void)
{
	char c;
	string str;
	cout<<"Please type some lines of text.Enter a dot(.) to finish:\n";
	do{
		c=cin.get();
		str += c;
		if(c=='\n')
		{
			cout<<str;
			str.clear();
		}
	}while(c!='.');	  
  	return 0;
}

