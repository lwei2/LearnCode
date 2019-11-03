/*************************************************************************
    > File Name: Pro4.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <future>

using namespace std;

int find_the_answer_to_ltuae()
{
	return 42;
}
void do_other_stuff()
{

}

int main(void)
{
	std::future<int> the_answer = std::async(find_the_answer_to_ltuae);
	do_other_stuff();
	std::cout<<"The answer is "<<the_answer.get()<<std::endl;
	return 0;
}
