/*************************************************************************
    > File Name: template_swap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>

using namespace std;

template<typename T>
void Swap(T &t1, T &t2)
{
	T tmp;
	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

int main(void)
{
	int a,b;
	cin>>a>>b;
	cout<<"a and b:"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"a and b:"<<a<<" "<<b<<endl;

	char c1,c2;
	cin>>c1>>c2;
	cout<<"c1 and c2:"<<c1<<" "<<c2<<endl;
	swap(c1,c2);
	cout<<"c1 and c2:"<<c1<<" "<<c2<<endl;

	return 0;
}

