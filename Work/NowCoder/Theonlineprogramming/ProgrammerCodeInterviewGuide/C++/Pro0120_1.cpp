/*************************************************************************
    > File Name: Pro0120_1.cpp
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

	vector<int>num(n);
	for(int i = 0; i < n; i++)
		cin>>num[i];
	sort(num.begin(), num.end());
	for(int i = 1; i < n - 1; i += 2)
		swap(num[i],num[i+1]);
	for(int i = 0; i < n; i++)
		cout<<num[i]<<" ";
	return 0;
}
