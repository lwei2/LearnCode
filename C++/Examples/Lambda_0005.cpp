/*************************************************************************
    > File Name: Lambda_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n = [](int x, int y)
	{
		return x+y;
	}(5,4);
	cout<<n<<endl;
	return 0;
}
