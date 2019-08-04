/*************************************************************************
    > File Name: Pro1108-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int t;
	int x,y;	
	while(cin>>x>>y)
	{
		if(x > y)
			t = x;
		else
			t = y;
		for(;;t++)
			if(t%x == 0 && t%y == 0)
			{
				cout<<t<<endl;
				break;
			}
	}

	return 0;
}
