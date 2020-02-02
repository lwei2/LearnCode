/*************************************************************************
    > File Name: Pro0083_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;


struct Node
{
	long long x,y,val;
};

struct cmp
{
	bool operator()(const Node n1, const Node n2)
	{
		return n1.val < n2.val;
	}
};


int main(void)
{
	long long int n,k;
	cin>>n>>k;
	long long int a[n],b[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		scanf("%lld",&b[i]);
	}

	sort(a,a+n);
	sort(b,b+n);
	map<long long int , map<long long int, bool> >mp;
	priority_queue<Node, vector<Node>, cmp> pq;
	pq.push({
			n-1,n-1,a[n-1] + b[n-1]
			});
	mp[n-1][n-1] = true;
	while(k > 0 && !pq.empty())
	{
		long long int x = pq.top().x;
		long long int y = pq.top().y;
		cout<<pq.top().val<<" ";
		pq.pop();
		if(x > 0 && !mp[x-1][y])
		{
			pq.push({
					x-1,y,a[x-1] + b[y]
					});
			mp[x-1][y] = true;
		}
		if(y > 0 && !mp[x][y-1])
		{
			pq.push({
					x,y-1,a[x] + b[y-1]
					});
			mp[x][y-1] = true;
		}
		k--;
	}

	return 0;
}
