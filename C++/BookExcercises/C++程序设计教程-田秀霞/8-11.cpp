/*************************************************************************
    > File Name: 8-11.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

class Elec
{
	char ename[50];
	char mnum[20];
	int num;
	char addr[20];
	public:
		Elec();
		Elec(char p[], char q[], int l, char m[])
		{
			strcpy(ename,p);
			strcpy(mnum, q);
			num = l;
			strcpy(addr,m);
		};
		void show()
		{
			cout<<ename<<" "<<mnum<<" "<<num<<" "<<addr<<endl;
		}
};
int main(void)
{
	Elec elec[2] ={
		Elec("Apple iphone","3G5",568948,"guangzhou"),
		Elec("HuaWei", "5G4",568955,"shenzhen")
	};
	elec[0].show();
	elec[1].show();
	return 0;
}
