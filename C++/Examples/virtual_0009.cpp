/*************************************************************************
    > File Name: virtual_0009.cpp
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
		void show()
		{
			cout<<"Base show"<<endl;
		}
	private:
		int x;
};

int main(void)
{
	cout<<"size:"<<sizeof(Base)<<endl;
	return 0;
}


