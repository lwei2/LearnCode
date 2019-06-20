/*************************************************************************
    > File Name: ignore_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <set>
#include <tuple>

using namespace std;

int main(void)
{
	set<string> set_of_str;
	bool inserted = false;
	std::tie(ignore, inserted) = set_of_str.insert("Test");
	if(inserted)
	{
		cout<<"Value was inserted succuessfully!"<<endl;
	}
	return 0;
}
