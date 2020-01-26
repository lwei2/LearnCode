/*************************************************************************
    > File Name: Pro0051_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	long long v[n];
	for(int i = 0; i < n; i++)
		scanf("%lld", &v[i]);

	long long ans = 0;
	priority_queue<long long, vector<long long>,greater<>> pq;
	for(int i = 0; i < n; i++)
		pq.push(v[i]);

	while(!pq.empty() && pq.size() >= 2)
	{
		long long val1 = pq.top();
		pq.pop();
		long long val2 = pq.top();
		pq.pop();
		ans += val1 + val2;
		pq.push(val1 +val2);
	}
	cout<<ans<<endl;
	return 0;
}
