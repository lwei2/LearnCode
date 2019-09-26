/*************************************************************************
    > File Name: 9-8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class B0
{
	public:
		B0(int n)
		{
			nV = n;
			cout<<"B0 construct is calling!"<<endl;
		}
		void fun()
		{
			cout<<"member of B0"<<endl;
		}
		int nV;
};
class B1 : virtual public B0
{
	public:
		B1(int n, int a):B0(n)
	{
		nV1 = a;
		cout<<"B1 construct is calling!"<<endl;
	}
	protected:
		int nV1;
};

class B2 : virtual public B0
{
	public:
		B2(int n, int b):B0(n),nV2(b)
		{
			cout<<"B2 construct is calling!"<<endl;
		}
	protected:
		int nV2;
};


class D1 : public B1, public B2
{
	protected:
		int nVd;
	public:
		D1(int n, int a, int  b, int c):B0(n),B1(n,a),B2(n,b),nVd(c)
	{
		cout<<"D1 construct is calling!"<<endl;
	}
		void fun()
		{
			cout<<"member of D1"<<endl;
			cout<<"nV:"<<nV<<",nV1:"<<nV1<<",nV2:"<<nV2<<",nVd:"<<nVd<<endl;
		}

};


int main(void)
{
	D1 d1(1,2,3,4);
	d1.B0::fun();
	d1.fun();
	d1.nV = 2;
	cout<<"nV chagne to:"<<d1.nV<<endl;
	return 0;
}
