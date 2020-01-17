/*************************************************************************
    > File Name: 2-12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Widget
{
	public:
		Widget()
		{
			count++;
		}
		~Widget()
		{
			--count;
		}
		static int num()
		{
			return count;
		}
	private:
		static int count;
};

int Widget::count = 0;

int main(void)
{
	Widget x,y;

	cout<<"The num is"<<Widget::num()<<endl;
	if(Widget::num() > 1)
	{
		Widget x,y,z;
		cout<<"The num is "<<Widget::num()<<endl;
	}
	Widget z;
	cout<<"The num is "<<Widget::num()<<endl;
	return 0;
}
