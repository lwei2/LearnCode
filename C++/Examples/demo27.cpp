#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,d,x;
	a=c=0;
	b=1;
	d=20;
	if(a)
	  d=d-10;
	else if(!b)
	  if(!c)
		x=15;
	  else
		x=25;
	cout<<d<<endl;

	return 0;
}
