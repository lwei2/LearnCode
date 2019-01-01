/*************************************************************************
    > File Name: shared_ptr_00000000.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

int main(int argc,char *argv[])
{
	int a = 10;
	std::shared_ptr<int> ptra = std::make_shared<int> (a);
	std::shared_ptr<int> ptra1 (ptra);
	std::cout<<ptra.use_count()<<std::endl;

	int b = 20;
	int *pb = &a;
	std::shared_ptr<int> ptrb = std::make_shared<int> (b);
	ptra1 = ptrb;
	pb = ptrb.get();
	std::cout<<ptra.use_count()<<std::endl;
	std::cout<<ptrb.use_count()<<std::endl;

	return 0;
}
