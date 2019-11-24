/*************************************************************************
    > File Name: 11-14.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char filename[81];
	int n;
	char name[20];
	int age;
	char yes;
	int recsize = sizeof(name) + sizeof(int);
	cout<<"filename:";
	cin>>filename;
	fstream fbin(filename, ios::binary | ios::in | ios::out);
	if(!fbin)
	{
		cout<<"open failed "<<filename<<endl;
		return 0;
	}
	cout<<"Can you make sure Yes or No?";
	cin>>yes;
	while(yes == 'y' || yes == 'Y')
	{
		cout<<"Enter the filenotes:";
		cin>>n;
		cout<<"name:";
		cin>>name;
		cout<<"age:";
		cin>>age;
		fbin.seekp(n*recsize);
		fbin.write(name, 20);
		fbin.write((char*)(&age),sizeof(int));
		cout<<"Please Enter the Yes or No?";
		cin>>yes;
	}
	fbin.close();
	return 0;
}
