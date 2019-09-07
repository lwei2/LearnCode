/*************************************************************************
    > File Name: virtual_0008.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Base
{
	public:
		Base():x(0)
		{
		}
		~Base()
		{

		}
		virtual void show()
		{
			cout<<"Base show"<<endl;
		}
	private:
		int x;
};


int main(void)
{
	cout<<"size:"<<sizeof(Base)<<endl;
	Base b;
	return 0;
}
