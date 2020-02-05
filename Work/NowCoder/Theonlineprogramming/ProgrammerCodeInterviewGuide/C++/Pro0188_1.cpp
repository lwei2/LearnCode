/*************************************************************************
    > File Name: Pro0188_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int arr[1000000];
	int i,j,k;
	scanf("%d",&n);
	for(i = 0; i < n; ++i)
		scanf("%d",&arr[i]);
	for(i = 0; i < n; ++i)
	{
		j = i - 1;
		k = i + 1;
		for(; j >= 0; --j)
		{
			if(arr[j] < arr[i])
				break;
		}
		printf("%d",j);
		for(; k < n; ++k)
			if(arr[k] < arr[i])
				break;
		if(k == n)
			printf(" %d",-1);
		else
			printf(" %d", k);
		printf("\n");
	} 
	return 0;
}
