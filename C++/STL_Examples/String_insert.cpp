/*************************************************************************
    > File Name: String_insert.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	std::string str="to be question";
	std::string str2="the ";
	std::string str3="or not to be";
	std::string::iterator iter;

	str.insert(6,str2);
	str.insert(6,str3,3,4);
	str.insert(10,"that is cool", 8);
	str.insert(10,"to be");
	str.insert(15,1,':');
	iter=str.insert(str.begin()+5,',');
	str.insert(str.end(),3,'.');
	str.insert(iter+2,str3.begin(),str3.begin()+3);
	std::cout<<str<<endl;
	return 0;
}

