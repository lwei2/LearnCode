/*************************************************************************
    > File Name: String_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  	std::string buyer("money");
	std::string seller("goods");
	std::cout<<"Before the swap, buyer has"<<buyer;
	std::cout<<"and seller has"<<seller<<endl;
	seller.swap(buyer);

	std::cout<<"After the swap,buyer has"<<buyer;
	std::cout<<"and seller has"<<seller<<endl;

	return 0;
}
