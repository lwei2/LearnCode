/*************************************************************************
    > File Name: Pro1040.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

#define MAX 1000

int main(void)
{
	int T;
	int test[MAX] = {0};
	int tmp;
	int len;
	cin>>T;
	while(T--)
	{
		cin>>len;
		for(int i = 0; i < len; i++)
			cin>>test[i];
		for(int i = 0; i < len; i++)
		{
			for(int j = 1; j < len - i; j++)
			{
				if(test[j-1] > test[j])
				{
					tmp = test[j-1];
					test[j-1] = test[j];
					test[j] = tmp;
				}
			}
		}
		for(int i = 0; i < len; i++)
		{
			cout<<test[i];
			if(i!=len - 1)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
