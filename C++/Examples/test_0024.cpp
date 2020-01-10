/*************************************************************************
    > File Name: test_0024.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int x,y,n;
	for(x = 1, n = 0; n < 9; y = (x + 1)*2, x = y, n++)
		cout<<"peach :"<<x<<endl;
	return 0;
}
