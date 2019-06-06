/*************************************************************************
    > File Name: Pro1049.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,u,d;
	int current, min;
	cin>>n>>u>>d;
	while(n)
	{
		current = 0;
		min = 0;
		while(current < n)
		{
			min++;
			current += u;
			if(current == n || current > n)
				break;
			min++;
			current = current - d;
		}
		cout<<(min)<<endl;
		cin>>n>>u>>d;
	}
	return 0;
}
