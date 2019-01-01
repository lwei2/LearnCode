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
			cout<<"perimter="<<2*(length + width)<<endl;
		}
	private:
		float width, length;
};


int main(void)
{
	Rectangle a(10,20);
	a.GetPerim();
	a.GetArea();
	return 0;
}
