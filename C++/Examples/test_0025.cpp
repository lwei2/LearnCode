/*************************************************************************
    > File Name: test_0025.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	std::ostream *prevstr;
	std::ofstream ofs;
	ofs.open("test.txt");
	std::cout<<"tie example:\n";
	*std::cin.tie()<<"This is inserted into cout\n";
	prevstr = std::cin.tie(&ofs);
	*std::cin.tie()<<"This is inserted into the file\n";
	std::cin.tie(prevstr);
	ofs.close();
	return 0;
}
