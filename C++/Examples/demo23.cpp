#include<iostream>

using namespace std;

int main(void)
{
	int x;
	int y;
	cout<<"Enter the x:";
	cin>>x;
	if(x<0)
	  y = -1;
	else if(x>0)
	  y = 1;
	else
	  y = 0;
	cout<<"y = "<<y<<endl;

	return 0;
}
