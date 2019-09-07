/*************************************************************************
    > File Name: constructor_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class CExample
{
	private:
		int a;
	public:
		CExample(int b)
		{
			a = b;
			cout<<"constructor is called!"<<endl;
		}
		CExample(const CExample &c)
		{
			a = c.a;
			cout<<"copy constructor is called!"<<endl;
		}
		~CExample()
		{
			cout<<"destructor is called!"<<endl;
		}
		void Show()
		{
			cout<<a<<endl;
		}
};

int main(void)
{
	CExample A(100);
	CExample B = A;
	B.Show();
	return 0;
}
