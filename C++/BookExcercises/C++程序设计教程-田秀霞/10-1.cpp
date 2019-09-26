/*************************************************************************
    > File Name: 10-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Cshape
{
	public:
		void Display(void)
		{
			cout<<"Cshape"<<endl;
		}
};
class Crectangle: public Cshape
{
	public:
		void Display(void)
		{
			cout<<"Crectangle"<<endl;
		}
};
class Cellipse: public Cshape
{
	public:
		void Display(void)
		{
			cout<<"Cellipse"<<endl;
		}
};

int main(void)
{
	Cshape obShape;
	Cellipse obEllipse;
	Crectangle obRectangle;
	Cshape *pShape[3] = {
		&obShape, &obEllipse, &obRectangle
	};
	for(int i = 0; i < 3; i++)
		pShape[i]->Display();
	return 0;
}
