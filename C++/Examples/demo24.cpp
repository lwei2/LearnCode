#include<iostream>

using namespace std;

int main(void)
{
	int i;
	i = 2;
	switch(i)
	{
		case 2:
			i--;
		default:
			i++;
	}
	cout<<"i="<<i<<endl;

	return 0;
}
