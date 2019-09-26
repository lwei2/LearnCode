/*************************************************************************
    > File Name: 9-1.cpp
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
		int no;
		float price;
	protected:
		float salesamount;
	private:
		int amount;
	public:
		void get(int s)
		{
			amount = s;
		}
		void sale()
		{
			salesamount = price+amount;
		}
		void show()
		{
			cout<<"no:"<<no<<endl;
			cout<<"price:"<<price<<endl;
			cout<<"amount:"<<amount<<endl;
			cout<<"salesamount:"<<salesamount<<endl;
		}
};
class Book1:protected Book
{
	private:
		char name[40];
		char publisher[20];
	public:
		void get1(char n[40], char p[20])
		{
			strcpy(name,n);
			strcpy(publisher,p);
		}
		void show1()
		{
			cout<<"name:"<<name<<endl;
			cout<<"publisher:"<<publisher<<endl;
		}
};
int main(void)
{
	Book1 b1;
	//b1.no = 100021;
	//b1.price = 28.5;
	//b1.get(580);
	//b1.get1("计算机基础","航空工业出版社");
	//b1.sale();
	//b1.show();
	b1.show1();

	return 0;
}
