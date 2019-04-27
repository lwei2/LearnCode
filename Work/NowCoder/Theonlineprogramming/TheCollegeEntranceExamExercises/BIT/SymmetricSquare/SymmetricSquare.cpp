/*************************************************************************
    > File Name: SymmetricSquare.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int rec(int n)
{
	int t = 0;
	while(n)
	{
		t = t * 10 + n%10;
		n/=10;
	}
	return t;
}

int main(void)
{

	for(int i = 1; i < 256; i++)
		if(i * i == rec(i * i))
			printf("%d\n",i);
	return 0;
}
