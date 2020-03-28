/*************************************************************************
    > File Name: Pro1078_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int m;
	long long n;
	deque<int> v;
	cin>>n>>m;
	while(n/m!=0)
	{
		v.push_front(n%m);
		n=n/m;
	}
	v.push_front(n);
	for(int i = 0; i < v.size(); i++)
		cout<<v[i];

	return 0;
}
