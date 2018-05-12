/*************************************************************************
    > File Name: template_class.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


template<class T1,class T2>
class A
{
	private:
	  T1 x;
	  T2 y;
	public:
	  A(T1 m, T2 n);
	  void show();
};
template<class T1, class T2>
A<T1,T2>::A(T1 m, T2 n)
{
	cout<<"construct function"<<endl;
	x = m;
	y = n;
}	
template<class T1, class T2>
void A<T1,T2>::show()
{
	cout<< "x="<<x<<"y="<<y<<endl;
}

int main(void)
{
 	A<int,int>c1(24,59);
	c1.show();
	A<int,char>c2(20,'d');
	c2.show();
	A<double,int>c3(32.5,12);
	c3.show();
	A<double,double>c4(34.3,38.2);
	c4.show();

	return 0;
}
