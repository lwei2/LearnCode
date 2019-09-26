/*************************************************************************
    > File Name: 9-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	public:
		Book();
		Book(int n, float p, int s)
		{
			cout<<"call base class construction!"<<endl;
			no = n;
			price = p;
			amount = s;
		}
		~Book()
		{
			cout<<"call base class destruction!"<<endl;
		}
		int sale()
		{
			cout<<price*amount<<endl;
			return 0;
		}
	protected:
		int no;
		float price;
 		int amount;
};
class Book1:public Book
{
	public:
		Book1(int n,float p, int s,char *np, char *pp):Book(n,p,s)
		{
			cout<<"call Derived class construction!"<<endl;
			strcpy(name,np);
			strcpy(publisher,pp);
		}
		~Book1()
		{
			cout<<"call Derived class destruction!"<<endl;
		}
		void show()
		{
			cout<<"no:"<<no<<endl;
			cout<<"price:"<<price<<endl;
			cout<<"amount:"<<amount<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"publisher:"<<publisher<<endl;			
		}
	private:
		char name[40];
		char publisher[20];
};
int main(void)
{
	Book1 b1(85997,35.8,6000,"计算机原理","航空工业出版社");
	Book1 b2(85989, 34,5000,"C++程序设计","大连理工出版社");
	cout<<"b1:"<<endl;
	b1.show();
	cout<<"b2:"<<endl;
	b2.show();
	cout<<"b1 sale:"<<endl;
	b1.sale();
	cout<<"b2 sale:"<<endl;
	b2.sale();

	return 0;
}
