/*************************************************************************
    > File Name: Pro0067_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);

	int *arr = new int[n];
	int *res = new int[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		res[i] = 0;
	}

	int capital = -1;
	int dist;
	int pre, cur = 0, next, nn, level;
	while(cur < n)
	{
		if(arr[cur] == cur)
		{
			capital = cur;
			res[0] = 1;
		}
		else if(arr[cur] >= 0)
		{
			next = arr[cur];
			arr[cur] = cur;
			while(arr[next] != next && arr[next] >= 0)
			{
				nn = arr[next];
				arr[next] = cur;
				cur = next;
				next = nn;
			}
			capital = arr[next] == next ? next : capital;
			level = arr[next] < 0 ? arr[next] - 1 : -1;
			if(arr[cur] == cur)
			{
				arr[cur] = level--;
			}
			else
			{
				while(arr[cur] != cur)
				{
					next = arr[cur];
					arr[cur] = level--;
					cur = next;
				}
				arr[cur] = level--;
			}
		}
		cur++;
	}
	arr[capital] = 0;


	cur = 0;
	int i,t;
	while(cur < n)
	{
		next = arr[cur];
		while(next <= 0)
		{
			if(-next <= cur)
			{
				if(arr[-next] < 0)
					arr[-next] = 1;
				else
					arr[-next]++;
				break;
			}
			nn = arr[-next];
			if(arr[-next] > 0)
			{
				arr[-next]++;
				break;
			}
			else
			{
				arr[-next] = 1;
			}
			next = nn;
		}
		cur++;
	}


	for(int i = 0; i < n; i++)
	{
		if(arr[i] > 0)
			printf("%d ",arr[i]);
		else
			printf("0 ");
	}
	printf("\n");

	delete[]arr, res;

	return 0;
}
