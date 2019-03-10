/*************************************************************************
    > File Name: exception_0001.cpp
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
			throw -1;
		else
			cout<<m/n<<endl;
	}
	catch(double d)
	{
		cout<<"catch(double)"<<d<<endl;
	}
	catch(int e)
	{
		cout<<"catch(int)"<<e<<endl;
	}
	cout<<"finished"<<endl;

	return 0;
}
