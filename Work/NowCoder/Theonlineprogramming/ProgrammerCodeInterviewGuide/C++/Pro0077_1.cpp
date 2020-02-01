/*************************************************************************
    > File Name: Pro0077_1.cpp
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
	vector<int> num(n);
	vector<int> candy(n,1);
	for(int i = 0; i < n; i++)
		cin>>num[i];
	for(int i = 1; i < n; i++)
		if(num[i] > num[i-1])
			candy[i] = candy[i-1] + 1;
	for(int i = n - 2; i >= 0; i--)
		if(num[i] > num[i+1])
			candy[i] = max(candy[i], candy[i+1] + 1);
	int res = 0;
	for(int i = 0; i < n; i++)
		res += candy[i];
	cout<<res<<endl;
	return 0;
}
