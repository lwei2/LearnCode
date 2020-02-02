/*************************************************************************
    > File Name: Pro0099_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
const int modd = 1e9 + 7;

int main(void)
{
	ios::sync_with_stdio(false);

	int n;
	string str, strs[maxn];
	cin>>n>>str;
	for(int i = 0; i < n; ++i)
		cin>>strs[i];
	
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int mid = l + ((r -l) >> 1);
		if(strs[mid] == str)
		{
			res = mid;
			r = mid - 1;
		}
		else 
		{
			if(strs[mid] != "0")
			{
				if(strs[mid] > str)
					r = mid - 1;
				else
					l = mid + 1;
			}
			else
			{
				int i = mid;
				for(i = mid - 1; i >= l; --i)
				{
					if(strs[i] != "0")
						break;
				}
				if(i + 1 == l)
				{
					l = mid + 1;
					continue;
				}
				if(strs[i] == str)
				{
					res = i;
					r = i - 1;
				}
				else if(strs[i] > str)
				{
					r = i - 1;
				}
				else
					l = i + 1;
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
