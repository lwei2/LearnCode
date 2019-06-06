/*************************************************************************
    > File Name: Pro1025.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

const int N = 500009;

struct LINE 
{
	int from,to;
	friend bool operator<(LINE A, LINE B)
	{
		return A.from < B.from;
	}
};
LINE node[N];
int y[N];
int c[N];
int MID(int a[], int value, int size)
{
	int l = 1,r = size;
	int mid = (l+r)/2;
	while(l < r)
	{
		if(a[mid] < value && value<=a[mid+1])
			return mid+1;
		else if(value <=a[mid])
			r = mid;
		else
			l = mid+1;
		mid = (l+r)/2;
	}
}
int LIS(int len)
{
	int size = 1;
	int zhong = 0;
	c[1] = y[1];
	for(int i = 2; i <= len; i++)
	{
		if(y[i] <= c[1])
			c[1] = y[i];
		else if(y[i] > c[size])
			c[++size] = y[i];
		else
		{
			zhong = MID(c,y[i],size);
			c[zhong] = y[i];
		}
	}
	return size;
}

int main(void)
{
	int n;
	int cnt = 1;
	while(cin>>n)
	{
		for(int i = 0; i < n; i++)
			scanf("%d %d", &node[i].from, &node[i].to);
		sort(node,node+n);
		for(int i = 0; i < n; i++)
			y[i+1] = node[i].to;
		int ans = LIS(n);
		cout<<"Case "<<cnt<<':'<<endl;
		cout<<"My king, at most "<<ans;
		if(ans>1)
			cout<<" roads can be built."<<endl;
		else
			cout<<" road can be built."<<endl;
		cnt++;
		cout<<endl;		
	}
	return 0;
}
