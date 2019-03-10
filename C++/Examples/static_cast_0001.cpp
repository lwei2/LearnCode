/*************************************************************************
    > File Name: static_cast_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class A
{
	public:
		operator int()
		{
			return 1;
		}
		operator char*()
		{
			return NULL;
		}
};

int main(void)
{
	A a;
	int n;
	char *p = "New Dragonn Inn";
	n = static_cast<int>(3.14);
	cout<<n<<endl;
	n = static_cast<int>(a);
	cout<<n<<endl;
	//n = static_cast<char*>(a);
	//n = static_cast<int>(p);
	//p = static_cast<char*>(n);

	return 0;
}


