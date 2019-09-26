/*************************************************************************
    > File Name: 10-3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Cshape
{
	public:
		virtual void Display(void)=0;		
};
class Crectangle:public Cshape
{
	public:
		void Display(void)
		{
			cout<<"Crectangle"<<endl;
		}
};
class Cellipse:public Cshape
{
	public:
		void Display(void)
		{
			cout<<"Cellipse"<<endl;
		}
};

int main(void)
{
	Cellipse obEllipse;
	Crectangle obRectangle;
	Cshape *pShape[2] = {
		&obEllipse,&obRectangle
	};
	for(int i = 0; i < 2; i++)
	{
		pShape[i]->Display();
	}
	return 0;
}
