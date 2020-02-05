/*************************************************************************
    > File Name: Pro0159_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int n,m;
	while(scanf("%d",&n)!=EOF)
	{
		int A[n];
		for(int i = 0; i < n; i++)
			scanf("%d",&A[i]);
		scanf("%d",&m);
		int B[m], Ai = 0, Bi = 0;
		for(int i = 0; i < m; i++)
			scanf("%d", &B[i]);
		for(int i = 0; i < n + m; i++)
		{
			if(Ai == n)
			{
				printf("%d ", B[Bi]);
				Bi++;
			}
			else if(Bi == m)
			{
				printf("%d ",A[Ai]);
				Ai++;
			}
			else if(A[Ai] < B[Bi])
			{
				printf("%d ",A[Ai]);
				Ai++;
			}
			else
			{
				printf("%d ",B[Bi]);
				Bi++;
			}
		}
		printf("\n");
	}
	return 0;
}
