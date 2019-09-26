/*************************************************************************
    > File Name: 13-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

template<typename T>
void sort(T elements[], unsigned int n)
{
	T temp;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(elements[j] > elements[j+1])
			{
				temp = elements[j];
				elements[j] = elements[j+1];
				elements[j+1] = temp;
			}
		}
	}
}
int main(void)
{
	int i,n;
	cin>>n;
	int *p = new int[n];
	cout<<"Enter the n:"<<endl;
	for(i = 0; i < n; i++)
		cin>>p[i];
	sort(p,n);
	for(i = 0; i < n; i++)
		cout<<"p["<<i<<"]="<<p[i]<<"\t";
	cout<<endl;
	cin>>n;
	double *d = new double[n];
	cout<<"Enter the n:"<<endl;
	for(i = 0; i < n; i++)
		cin>>d[i];
	sort(d,n);
	for(i = 0; i < n; i++)
		cout<<"d["<<i<<"]="<<d[i]<<"\t";
	cout<<endl;
	cin>>n;
	char *c = new char[n];
	for(i = 0; i < n; i++)
		cout<<"c["<<i<<"]="<<c[i]<<"\t";
	cout<<endl;
	return 0;
}
