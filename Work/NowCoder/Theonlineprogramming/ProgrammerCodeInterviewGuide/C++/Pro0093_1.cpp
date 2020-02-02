/*************************************************************************
    > File Name: Pro0093_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&v[i]);
	sort(v,v+n);

	int cnt = 1;
	int ans = 1, pre = v[0];
	for(int i = 1; i < n; i++)
	{
		if(v[i] - v[i-1] == 1)
		{
			cnt++;
			pre = v[i];
		}
		else if(v[i] - v[i-1] == 0)
			continue;
		else
		{
			pre = v[i];
			cnt = 1;
		}
		ans = max(ans, cnt);
	}
	cout<<ans<<endl;
	return 0;
}
