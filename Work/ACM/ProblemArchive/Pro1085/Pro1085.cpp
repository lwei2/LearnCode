/*************************************************************************
    > File Name: Pro1085.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstring>

using namespace std;

int v[3] = {1,2,5};
int n[3];
int a[9050],b[9050];

int main(void)
{
	while(scanf("%d%d%d",&n[0],&n[1],&n[2]) == 3 && (n[0] || n[1] || n[2]))
	{
		a[0] = 1;
		int last = 0;
		for(int i = 0; i < 3; i++)
		{
			int last2 = last + n[i]*v[i];
			memset(b,0,sizeof(int)*(last2 + 1));
			for(int j = 0; j <= n[i] && j*v[i] <= last2; j++)
			{
				for(int k = 0; k <= last && k + j*v[i]<=last2; k++)
				{
					b[k+j*v[i]] += a[k];
				}
			}
			memcpy(a,b,sizeof(int)*(last2 + 1));
			last = last2;
		}
		int idx;
		for(idx = 0; idx <= last; idx++)
		{
			if(a[idx] == 0)
				break;
		}
		printf("%d\n",idx);
	}
	return 0;
}
