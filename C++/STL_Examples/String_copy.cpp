/*************************************************************************
    > File Name: String_copy.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	string str("Test string...");
	char buffer[20];
	size_t length = str.copy(buffer,6,5);
	buffer[length] = '\0';
	cout<<"buffer contains:"<<buffer<<endl;

	return 0;
}

