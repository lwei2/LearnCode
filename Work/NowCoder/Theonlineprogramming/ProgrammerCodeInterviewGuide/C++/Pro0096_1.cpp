/*************************************************************************
    > File Name: Pro0096_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,m;
string stra,strb;
const int maxn = 1e5 + 5;
const int modd = 1e9 + 7;


int main(void)
{
	scanf("%d%d",&n,&m);
	cin>>stra>>strb;
	if(n!=m)
	{
		printf("NO\n");
		return 0;
	}
	stra += stra;
	if(stra.find(strb) != -1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
