/*************************************************************************
    > File Name: Pro1002_2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int left, righ;
	int result = 0;
	
	cin>>left>>right;
	for(int i = left; i <= right; ++i)
	{
		switch(i%3)
		{
			case 1:
				break;
			case 2:
				++result;
				break;
			case 0:
				++result;
				break;
		}		
	}
	cout<<result<<endl;
	return 0;
}
