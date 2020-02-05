/*************************************************************************
    > File Name: 11-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	list list1;  //list<int> list1;
	for(int i = 0; i < 8; i++)
	{
		list1.push_back(i);
	}

	//list1<int>::iterator it
	for(list1::iterator it = list1.begin(); it != list1.end(); ++it)
	{
		if(*it % 2 == 0)
			list1.erase(it); // it = list1.erase(it), it--;		
	}
	return 0;
}
