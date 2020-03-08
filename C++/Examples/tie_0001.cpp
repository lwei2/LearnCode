/*************************************************************************
    > File Name: tie_0001.cpp
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
	std::cout<<"tie example:/n";
	*std::cin.tie()<<"This is inserted into cout";
	prevstr = std::cin.tie(&ofs);
	*std::cin.tie()<<"This is inserted into the file";
	std::cin.tie(prevstr);
	ofs.close();
	cout<<endl;
	return 0;
}
