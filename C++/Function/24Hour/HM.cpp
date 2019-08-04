/*************************************************************************
    > File Name: test.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>


using namespace std;


int main(void)
{
	int cnt = 0;
	for(int i = 1; i < 60; i++)
	{
		for(int j = 0; j < 24; j++)
		{
			if((int)((i/60.0 + j)*5) == i)
				cnt++;
		}
	}
	cout<<2*cnt<<endl;
	return 0;
}
