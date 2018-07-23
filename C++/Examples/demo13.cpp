#include <iostream>

using namespace std;

int main(void)
{
	int a = 8;
	int b;
	a+=a*=a+a;
	cout<<"a+=a*=a+a "<<a<<endl;
	a = 8;
	a+=a*=a+=a;
	cout<<"a+=a*=a+=a "<<a<<endl;
	cout<<"b="<<(b=a)<<endl;


	return 0;
}
