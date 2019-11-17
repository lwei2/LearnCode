/*************************************************************************
    > File Name: 12-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "A_head1.h"
#include "B_head2.h"

using namespace std;

int main(void)
{
	head1::Student st1(1001, "Che");
	st1.show();
	head1::fun();
	head2::Student st2(956, "ACM", 36.8);
	st2.show();
	head2::fun();
	return 0;
}
