/*************************************************************************
    > File Name: Pro0183_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

static int mod = 1000000007;
void matrixMul(long long int m1[][2],long long int m2[][2])
{
	long long int res[2][2] = {{0,0},{0,0}};
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			for(int k = 0; k < 2; k++)
			{
				res[i][j] = (res[i][j] + (m1[i][k] * m2[k][j]) % mod)%mod;
			}
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
			m1[i][j] =res[i][j];
	}
}

void solution(long long int p[][2], long long int res[][2], long long int m)
{
	int start = 1;
	long long int e[2][2] = {{1,0},{0,1}};
	while(0!=m)
	{
		if((m&1) != 0)
			matrixMul(e,p);
		matrixMul(p,p);
		m = m >> 1;
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
			res[i][j] = e[i][j];
	}
}

int main(void)
{
	long long int n;
	cin>>n;
	if(n <= 0)
		printf("-1\n");
	else if(n <= 2)
		printf("1\n");
	
	long long int p[2][2] = {{1,1},{1,0}};
	long long int result[2][2] = {0};
	solution(p, result, n - 2);
	printf("%d\n",(result[0][0] + result[1][0])%mod);
	return 0;
}
