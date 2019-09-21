/*************************************************************************
    > File Name: Pro1001_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	long long int l,r;
	while(cin>>l>>r)
	{
		long long int count = 0;
		for(int i = l; i <= r; i++)
		{
			if(((i+1)*i/2)%3 == 0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
