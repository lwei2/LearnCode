/*************************************************************************
    > File Name: Pro1056.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	double sum;
	double len;
	while(cin>>len)
	{
		if(0 == len)
			break;
		sum = 0, n = 0;
		while(sum < len)
		{
			n++;
			sum += 1.0/(n+1);
		}
		cout<<n<<" card(s)"<<endl;
	}
	return 0;
}
