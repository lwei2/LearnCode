#include<iostream>

using namespace std;

void swap(int,int);

int main(void)
{
	int x,y;
	cout<<"Enter x and y:";
	cin>>x>>y;
	swap(x,y);
	cout<<"x="<<x<<","<<"y="<<y<<endl;
	return 0;
}
void swap(int x,int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	cout<<"x="<<x<<","<<"y="<<y<<endl;
}
