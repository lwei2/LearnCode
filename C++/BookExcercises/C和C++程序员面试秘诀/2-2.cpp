/*************************************************************************
    > File Name: 2-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#define MAX(x,y) (((x) > (y)) ? (x):(y))
#define MIN(x,y) (((x) < (y)) ? (x):(y))

using namespace std;

int main(void)
{
	int ret =MAX(3,4);
	cout<<"Max:"<<ret<<endl;
	int ret1=MIN(1,2);
	cout<<"Min:"<<ret1<<endl;
	return 0;
}
