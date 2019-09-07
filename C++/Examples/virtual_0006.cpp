


#include <iostream>

using namespace std;

class Parent
{
public:
	Parent()
	{

	}
	~Parent()
	{
		ClearAll();
	}
	void ClearAll()
	{
		ThePure();
	}
	virtual bool ThePure() = 0;//纯虚函数，抽象类无法创建对象
};
class Child:public Parent
{
public:
	Child()
	{

	}
	~Child()
	{
		ClearAll();
	}
	void ClearAll()
	{
		ThePure();
	}
	virtual bool ThePure()
	{
		return true;
	}
	
};
int main(void)
{
	Child c;
	Parent p;
	p.ThePure();//pure virtual method called  terminate called without an active exception
	return 0;
}
