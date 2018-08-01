#include<iostream>

using namespace std;

int main(void)
{
	int i = 1;
	while(i<=10)
	{
		if(++i%3!=1)
		  continue;
		else
		  cout<<i<<endl;
	}
	return 0;
}
