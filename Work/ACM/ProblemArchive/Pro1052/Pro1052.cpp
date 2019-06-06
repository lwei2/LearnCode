/*************************************************************************
    > File Name: Pro1052.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int i,j;
	int a[1002],b[1002];
	int n,c,k,d,l;

	while(scanf("%d",&n)!=EOF && n!=0)
	{
		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);

		for(i = 0; i < n; i++)
			scanf("%d",&b[i]);

		sort(a,a+n);
		sort(b,b+n);
		c=j=k=d=0;

		for(i = n - 1, l = n - 1; i >= d; i--,l--)
		{
			if(a[i] > b[l])
				c++;
			else if(a[i] == b[l])
			{
				while(a[j] > b[k])
					c++,j++,k++;
				if(j!=i)
				{
					if(a[j] < b[l])
						c--,i++,j++;
				}
			}
			else
			{
				while(a[j] > b[k])
					c++,j++,k++;
				if(j!=i)
					c--,j++,i++;
				if(j == i && a[j] < b[l])
					c--,i++,j++;
			}
			d = j;
		}
		printf("%d\n",c*200);
	}

	return 0;
}
