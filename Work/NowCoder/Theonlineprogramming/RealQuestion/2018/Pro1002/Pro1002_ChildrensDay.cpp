/*************************************************************************
    > File Name: Pro1002_ChildrensDay.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void ChildensDay(void)
{
	int n;
	cin>>n;
	vector<int>h(n);
	for(int i = 0; i < n; i++)
		cin>>h[i];  //scanf("%d",&h[i]);
	
	int m;
	cin>>m;
	vector<int>w(m);
	for(int j = 0; j < m; j++)
		cin>>w[j];	//scanf("%d",&m[j]);

	int count = 0;
	sort(h.begin(), h.end());
	sort(w.begin(), w.end());
	for(int i = 0, j = 0; i < n && j < m; j++)
	{
		if(w[j]>=h[i])
		{
			count++;
			i++;	//count++,j++;
		}
	}
	cout<<count<<endl;
}
void ChildensDay1(void)
{
	int N,M,i,j;
	scanf("%d",&N);
	vector<int> child(N);
	for(i = 0; i < N; i++)
		scanf("%d",&child[i]);
	scanf("%d",&M);
	vector<int> cho(M);
	for(i = 0; i < M; i++)
		scanf("%d",&cho[i]);
	sort(child.begin(), child.end());
	sort(cho.begin(),cho.end());
	int res = 0;
	for(i = 0, j = 0; i < M && j < N; i++)
		if(cho[i] >= child[j])
			res++,j++;		
	printf("%d\n",res);
}
int main(void)
{
	ChildensDay();
	return 0;
}
