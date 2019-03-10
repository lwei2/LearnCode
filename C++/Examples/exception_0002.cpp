/*************************************************************************
    > File Name: exception_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	double m,n;
	cin>>m>>n;
	try
	{
		cout<<"before dividing!"<<endl;
		if(n==0)
			throw - 1;
		else if(m == 0)
			throw - 1.0;
		else
			cout<<m/n<<endl;
		cout<<"after dividing!"<<endl;
	}
	catch(double d)
	{
		cout<<"catch(double)"<<d<<endl;
	}
	catch(...)
	{
		cout<<"catch(...)"<<endl;
	}
	cout<<"finished!"<<endl;
	return 0;
}
