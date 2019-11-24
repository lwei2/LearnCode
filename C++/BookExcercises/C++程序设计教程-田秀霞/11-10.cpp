/*************************************************************************
    > File Name: 11-10.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream out;
	out.open("a.txt",ios_base::in);
	if(!out)
		cout<<"The file is not exit, open to failed"<<endl;
	else
	{
		cout<<"Hello world!";
	}
	out.close();
	cout<<"the file is close!"<<endl;
	return 0;	
}
