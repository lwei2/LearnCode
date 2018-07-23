#include <iostream>

using namespace std;

int main(void)
{
	int a = 7;
	int b = 18;
	int c = 9;
	int x,y;
	x = (b>=c&&b<=a);

	cout<<"x="<<x<<endl;
	x = (a||b+c&&b-c);
	cout<<"x="<<x<<endl;
	x=!(a>b&&!c||'a');
	cout<<"x="<<x<<endl;
	x=(!(a+b)+c-1&&b+c/2);
	cout<<"x="<<x<<endl;



	return 0;
}
