/*************************************************************************
    > File Name: 12-5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void myFunc(void);
class Expt
{
	public:
		Expt()
		{
			cout<<"Expt()"<<endl;
		}
	/*	Expt(Expt &ex)
		{
			cout<<"Expt(Expt)"<<endl;
		}*/
		~Expt()
		{
			cout<<"~Expt()"<<endl;
		}
		const char *showReason() const
		{
			return "show expection reason.";
		}
};

class Demo
{
	public:
		Demo();
		~Demo();
};
Demo::Demo()
{
	cout<<"Demo()"<<endl;
}
Demo::~Demo()
{
	cout<<"~Demo()"<<endl;
}

void myFunc(void)
{
	Demo D;
	cout<<"myFunc throw Expt."<<endl;
	throw Expt();
}

int main(void)
{
	try{
		cout<<"try..."<<endl;
		myFunc();
	}catch(Expt E){
		cout<<"catch..."<<endl;
		cout<<E.showReason()<<endl;
	}catch(char *str){
		cout<<"other expection:"<<str<<endl;
		cout<<"..return main..."<<endl;
	}
	return 0;
}
