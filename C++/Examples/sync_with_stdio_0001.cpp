/*************************************************************************
    > File Name: sync_with_stdio_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cout<<"a\n";
	std::printf("b\n");
	std::cout<<"c\n";
	return 0;
}
