/*************************************************************************
    > File Name: virtual_0011.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class BaseGraphics
{
	public:
		BaseGraphics()
		{

		}
		virtual ~BaseGraphics()
		{
			cout<<"BaseGraphics析构函数"<<endl;
		}
		virtual void draw()
		{
			cout<<"BaseGraphics类draw函数"<<endl;
		}
};


class circle : public BaseGraphics
{
	public:
		circle()
		{

		}
		virtual ~circle()
		{
			cout<<"circle析构函数"<<endl;
		}
		virtual void draw()
		{
			cout<<"circle类draw函数"<<endl;
		}
};

class square : public BaseGraphics
{
	public:
		square()
		{

		}
		virtual ~square()
		{
			cout<<"square析构函数"<<endl;
		}
		virtual void draw()
		{
			cout<<"square类draw函数"<<endl;
		}
};

class line : public BaseGraphics
{
	public:
		line()
		{

		}
		virtual ~line()
		{
			cout<<"line析构函数"<<endl;
		}
		virtual void draw()
		{
			cout<<"line类draw函数"<<endl;
		}
};




int main(void)
{
	cout<<"普通调用画函数"<<endl;
	circle *pcir = new circle();
	square *psqu = new square();
	line *pline = new line();
	pcir->draw();
	psqu->draw();
	pline->draw();
	delete pcir;
	delete psqu;
	delete pline;
	cout<<endl;
	cout<<"虚函数多态方法调用函数"<<endl;
	BaseGraphics *pbaseGrap[3] = {
		new	circle(), new square(), new line()
	};
	for(int i = 0;i < 3; i++)
		pbaseGrap[i]->draw();
	for(int i = 0; i < 3; i++)
		delete pbaseGrap[i];
	return 0;
}
