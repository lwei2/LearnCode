/*************************************************************************
    > File Name: Pro0074_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	int l = 0, r = n - 1;
	if(v[l] == v[r])
	{
		while(r > l && v[l] == v[0])
			l++;
	}
	if(v[0] < v[n-1])
	{
		cout<<v[0]<<endl;
		exit(0);
	}
	while(l < r)
	{
		int mid = l + r >> 1;
		if(v[mid] > v[0])
			l = mid + 1;
		else
			r = mid;
	}
	cout<<v[l]<<endl;
	return 0;
}
