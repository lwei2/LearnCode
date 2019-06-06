/*************************************************************************
    > File Name: Pro1032.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int getNum(long long a)
{
	int num = 1;
	while( a != 1)
	{
		if(a & 1)
			a = a*3 + 1;
		else
			a = a/2;
		num++;
	}
	return num;
}

int main(void)
{
	int a,b;
	int current_num;
	int max = 1;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		max = 0;
		int t1 = a, t2 = b;
		if( a > b)
		{
			t1 = b;
			t2 = a;
		}
		for(int i = t1; i <= t2; i++)
		{
			current_num = getNum(i);
			max = max > current_num ? max : current_num;
		}
		printf("%d %d %d\n", a, b, max);
	}
	return 0;
}
