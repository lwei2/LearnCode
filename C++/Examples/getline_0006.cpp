/*************************************************************************
    > File Name: getline_0006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char name[256],title[256];
	cin.getline(name,256);
	cin.getline(title, 256);
	cout<<name<<","<<title<<endl;
	return 0;
}
