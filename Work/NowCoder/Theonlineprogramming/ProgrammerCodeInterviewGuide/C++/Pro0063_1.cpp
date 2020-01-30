/*************************************************************************
    > File Name: Pro0063_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, ans = 0;
	cin>>n;
	int num[1000002] = {0};
	int left[1000002] = {0};
	int right[1000002] = {0};
	for(int i = 1; i <= n; i++)
	{
		cin>>num[i];
		left[i] = max(left[i-1], num[i]);
	}
	for(int i = n; i >= 1; i--)
	{
		right[i] = max(right[i+1],num[i]);
		ans = max(abs(left[i] - right[i]), ans);
	}
	cout<<ans<<endl;
	return 0;
}
