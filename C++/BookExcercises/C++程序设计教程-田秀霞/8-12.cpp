/*************************************************************************
    > File Name: 8-12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

class Elec
{
	public:
		char ename[50];
		char mnum[20];
		int num;
		char addr[20];
		Elec(){

		};
		Elec(char p[], char q[], int l, char m[])
		{
			strcpy(ename, p);
			strcpy(mnum, q);
			num = l;
			strcpy(addr,m);
		}
		void show()
		{
			cout<<ename<<","<<mnum<<","<<num<<","<<addr<<endl;
		}		
};
int main(void)
{
	Elec elec("Apple iphone", "3G5", 56789,"guangzhou");
	int *p = &elec.num;
	cout<<*p<<endl;
	void(Elec::*pfun)();
	pfun = &Elec::show;
	(elec.*pfun)();
	return 0;
}

