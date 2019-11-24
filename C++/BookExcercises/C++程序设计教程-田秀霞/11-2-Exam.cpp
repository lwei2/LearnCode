/*************************************************************************
    > File Name: 11-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <math.h>
#include <fstream>
#include <iomanip>

using namespace std;

struct elem
{
	double x;
	double s;
	double c;
	double t;
}test[10];

int main(void)
{
	int i,n;
	for(i = 0; i <= 100; i+=10)
	{
		n = i/10 - 1;
		test[n].x = i;
		test[n].s = sin(i);
		test[n].c = cos(i);
		test[n].t = tan(i);
	}
	ofstream ouf("data.txt", ios::out | ios::binary);
	ouf.write((char*)&test, 10*sizeof(elem));
	ouf.close();
	ifstream inf;
	inf.open("data.txt", ios::in | ios::binary);
	if(!inf.is_open())
	{
		cerr<<"Can't open data.txt!"<<endl;
		return 0;
	}
	elem tmp[10];
	cout.setf(ios::left);
	for(i = 0; i < 10; i++)
	{
		inf.read((char*)&tmp[i],sizeof(elem));
		cout<<"x="<<tmp[i].x
			<<"sin("<<tmp[i].x<<")="<<setw(10)<<tmp[i].s
			<<"cos("<<tmp[i].x<<")="<<setw(10)<<tmp[i].c
			<<"tan("<<tmp[i].x<<")="<<setw(10)<<tmp[i].t<<endl;
	}
	inf.close();
	return 0;
}
