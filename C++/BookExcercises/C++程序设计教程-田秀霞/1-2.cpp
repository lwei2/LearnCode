/*************************************************************************
    > File Name: 1-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Rectangle
{
	public:
		Rectangle(float w = 0, float l = 0)
		{
			width = w;
			length = l;
		}
		void GetArea()
		{
			cout<<"area="<<width*length<<endl;
		}
		void GetPerim()
		{
			cout<<"perimeter="<<2*(width+length)<<endl;
		};
	private:
		float width;
		float length;
};

int main(void)
{
	Rectangle a(10, 20);
	a.GetPerim();
	a.GetArea();
	return 0;
}
