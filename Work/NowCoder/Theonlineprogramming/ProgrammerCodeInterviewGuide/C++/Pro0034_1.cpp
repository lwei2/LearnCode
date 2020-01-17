/*************************************************************************
    > File Name: Pro0034_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int T,K,N;
	cin>>T>>K;
	int *v[T];
	priority_queue<pair<int,int>>pq;
	vector<int> v1(T);
	for(int i = 0; i < T; i++)
	{
		scanf("%d",&N);
		v[i] = new int[N];
		v1[i] = N-1;
		for(int j = 0; j < N; j++)
			scanf("%d",&v[i][j]);
		if(v1[i] != -1)
			pq.push({
					v[i][N-1],i
					});
	}
	while(K > 0)
	{
		pair<int, int> p = pq.top();
		pq.pop();
		printf("%d ",p.first);
		v1[p.second]--;
		if(v1[p.second]!=-1)
		{
			pq.push({
					v[p.second][v1[p.second]],p.second
					});
		}
		K--;
	}
	return 0;
}
