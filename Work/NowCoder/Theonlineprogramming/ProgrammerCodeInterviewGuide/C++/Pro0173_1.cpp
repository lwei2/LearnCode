/*************************************************************************
    > File Name: Pro0173_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isBST(vector<int> &a, int l, int r)
{
	if(l > r)
		return true;
	int i = l;
	for(; i < r; i++)
	{
		if(a[i] > a[r])
			break;
	}
	for(int t = i; t < r; t++)
	{
		if(a[t] < a[r])
			return false;
	}
	return isBST(a,l,i-1) && isBST(a,i,r-1);
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	if(isBST(a,0,n-1))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}
