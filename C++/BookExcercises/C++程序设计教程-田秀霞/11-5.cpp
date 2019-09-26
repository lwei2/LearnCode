/*************************************************************************
    > File Name: 11-5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	char ch[10];
	int a,b;
	cin>>ch;
	cout<<ch<<endl;
	cin>>a>>b;
	if(a < b)
	{
		cerr<<"cerr"<<endl;
		clog<<"clog"<<endl;
	}

	return 0;
}
