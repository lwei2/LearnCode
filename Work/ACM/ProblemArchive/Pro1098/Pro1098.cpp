/*************************************************************************
    > File Name: Pro1098.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

#define fx 5*pow(x,13) + 13*pow(x,5) + k*a*x

int main(void)
{
	int k;
	int x = 1;
	int a = 1;
	int mark = 1;
	int flag = 0;
	while(scanf("%d",&k)!=EOF)
	{
		mark = 1;
		flag = 0;
		for(a = 1; a < 10000; a++)
		{
			if((18+k*a)%65==0)
			{
				for(x = 1; x < 10000; x++)
				{
					if(fx%65==0)
						continue;
					else
					{
						break;
						mark = 0;
					}
				}
			}
			if(((18+k*a)%65 == 0)&&mark == 1)
			{
				flag = 1;
				break;
			}
		}
		if(mark && flag)
			cout<<a<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
