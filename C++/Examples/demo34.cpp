#include<iostream>

using namespace std;
int sum(int x,int y, int z = 1);
int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<sum(a,b,c)<<endl;
	cout<<sum(a,b)<<endl;
	return 0;
}
int sum(int x,int y,int z)
{
	return x+y+z;
}
