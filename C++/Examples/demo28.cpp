#include<iostream>

using namespace std;

int main(void)
{
	int a=0;
	int b=1;
	switch(a)
	{
		case 0:
			switch(b)
			{
				case 0:
					cout<<"a="<<a<<"b="<<b<<endl;
					break;
				case 1:
					cout<<"a="<<a<<"b="<<b<<endl;
					break;
			}
		case 1:
			a++;
			b++;
			cout<<"a="<<a<<"b="<<b<<endl;
	}
	return 0;
}
