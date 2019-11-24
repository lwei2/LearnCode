/*************************************************************************
    > File Name: 11-15.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(void)
{
	char filename[81];
	int n;
	char name[20];
	int age;
	char yes;
	int recsize = sizeof(name) + sizeof(int);
	cout<<"Enter the filename:";
	cin>>filename;
	fstream fbin(filename, ios::binary | ios::in | ios::out);
	if(!fbin)
	{
		cout<<"open failed "<<filename<<endl;
		return 0;
	}
	cout<<"Please Yes or No?";
	cin>>yes;
	while(yes == 'y' || yes == 'Y')
	{
		cout<<"filenotes:";
		cin>>n;
		fbin.seekg(n*recsize, ios::beg);
		fbin.read(name, 20);
		cout<<"n:"<<n<<endl;
		cout<<"name:"<<name<<endl;
		fbin.read((char*)(&age), sizeof(int));
		cout<<"age:"<<age<<endl;
		cout<<"Pleas Yes or No?";
		cin>>yes;
	}
	fbin.close();
	return 0;
}
