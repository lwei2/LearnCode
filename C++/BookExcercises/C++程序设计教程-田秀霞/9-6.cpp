/*************************************************************************
    > File Name: 9-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class base1
{
		int x1;
	public:
		base1(int y1)
		{
			x1 = y1;
			cout<<"call base1 class construction! x1="<<x1<<endl;
		}
		~base1()
		{
			cout<<"call base1 class destruction!"<<endl;
		}
};
class base2
{
		int x2;
	public:
		base2(int y2)
		{
			x2 = y2;
			cout<<"call base2 class construction! x2="<<x2<<endl;			
		}
		~base2()
		{
			cout<<"call base2 class destruction!"<<endl;
		}
};
class base3
{
		int x3;
	public:
		base3(int y3)
		{
			x3=y3;
			cout<<"call base3 class construction! x3="<<x3<<endl;
		}
		~base3()
		{
			cout<<"call base2 class destruction!"<<endl;
		}
};
class derived:public base3, public base1, public base2
{
	base1 ob1;
	base2 ob2;
	base3 ob3;
	public:
		derived(int a,int b, int c, int d, int e,int f):base1(a),base2(b),base3(c),ob1(d),ob2(e),ob3(f)
		{
			cout<<"call derived class construction!"<<endl;
		}
};
int main(void)
{
	derived ob(1,2,3,4,5,6);
	return 0;
}
