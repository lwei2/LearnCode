/*************************************************************************
    > File Name: unique_ptr_00000000.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

int main(void)
{
	std::unique_ptr<int> uptr(new int(10));
	std::unique_ptr<int> uptr1 = std::move(uptr);
	uptr1.release();
	return 0;
}


