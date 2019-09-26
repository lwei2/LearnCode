/*************************************************************************
    > File Name: 9-5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class person
{
		char phonenum[30];
		char name[20];
	public:
		person(char *pn, char *n);
		void show();
};
person::person(char *pn, char *n)
{
	strcpy(phonenum, pn);
	strcpy(name,n);
}
void person::show()
{
	cout<<"phonenum:"<<phonenum<<endl;
	cout<<"name:"<<name<<endl;
}
class employee: public person
{
	public:
		employee(char *pn, char *n,char *mpn, char *mn, int en, char *pt);
		void show()
		{
			person::show();
			cout<<"enum:"<<enumb<<endl;
			cout<<"part:"<<part<<endl;
		}
		void manger_show();
	private:
		person manger;
		int enumb;
		char part[30];
};
employee::employee(char *pn, char *n, char *mpn, char *mn, int en, char *pt):person(pn,n),manger(mpn,mn)
{
	enumb = en;
	strcpy(part, pt);
}
void employee::manger_show()
{
	cout<<"part manger:"<<endl;
	manger.show();
	cout<<endl;
}
int main(void)
{
	employee e1("15010167890","lwei2","15041634567","tracywang",10045,"研发部");
	employee e2("15010167890","Jack","15041634567","bessyzhang",10028,"销售部");
	cout<<"employee information:"<<endl;
	e1.show();
	e1.manger_show();
	e2.show();
	e2.manger_show();
	e1.person::show();
	return 0;
}
