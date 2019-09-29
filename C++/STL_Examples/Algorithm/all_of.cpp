/*************************************************************************
    > File Name: all_of.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(void)
{
	std::array<int, 8> foo = {
		3,5,7,11,13,17,19,23
	};
	if(std::all_of(foo.begin(), foo.end(),[](int i){
				return i%2;
				}))
		cout<<"All the elements are odd numbers"<<endl;
	return 0;
}
