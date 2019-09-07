/*************************************************************************
    > File Name: virtual_0007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;


class CShape
{
public:
	CShape()
	{

	}
	virtual ~CShape()
	{

	}
	virtual void Draw() = 0;
};

class CPoint : public CShape
{
	public:
		CPoint()
		{

		}
		~CPoint()
		{

		}
		void Draw()
		{
			cout<<"Hello,I am Point!"<<endl;
		}
};

class CLine : public CShape
{
	public:
		CLine()
		{

		}
		~CLine()
		{

		}
		void Draw()
		{
			cout<<"Hello, I am Line!"<<endl;
		}
};

template <class T>
void DrawShape(T *t)
{
	t->Draw();
}

int main(void)
{
#if 0
	CShape *shape = new CPoint();
	shape->Draw();
	delete shape;
	shape = new CLine();
	shape->Draw();
	delete shape;
#else
	CShape *shape = new CPoint();
	shape->Draw();
	DrawShape<CPoint>((CPoint*)shape);
	delete shape;

	shape = new CLine();
	shape->Draw();
	DrawShape<CLine>((CLine*)shape);
	delete shape;

#endif
	return 0;
}
