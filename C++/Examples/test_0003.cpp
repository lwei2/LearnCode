/*************************************************************************
    > File Name: test_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

class A
{
	public:
		A(char *n, char *ptr)
		{
			strcpy(name, n);
			address = new char[strlen(ptr) + 1];
			if(address != NULL)
				strcpy(address, ptr);
		}
		void show()
		{
			cout<<"Name is :" <<name <<endl;
			cout<<"Address is :"<<address <<endl;
		}
		A (A &R_ob)
		{
			cout<<"copy constructor"<<endl;
			strcpy(name, R_ob.name);
			address = new char[strlen(R_ob.address) + 1];
			if(address != NULL)
				strcpy(address, R_ob.address);
		}
		~A()
		{
			cout<<"~A"<<endl;
			delete []address;
		}
	private:
		char name[20];
		char *address;
};

int main(void)
{
	A ob1("Tom","HK");
	ob1.show();

	A ob2 = ob1;
	ob2.show();
	return 0;
}
