/*************************************************************************
    > File Name: Pro0184_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const long long mod = 1e9 + 7;

struct matrix
{
	long long int mat[2][2];
}A,B;

matrix mul(matrix a, matrix b)
{
	matrix tmp;
	memset(tmp.mat, 0, sizeof(tmp.mat));
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			for(int k = 0; k < 2; k++)
			{
				tmp.mat[i][j] += a.mat[i][k] * b.mat[k][j]%mod;
				tmp.mat[i][j] %= mod;
			}
		}
	}
	return tmp;
}


matrix pow_mat(matrix a, long long n)
{
	matrix ans;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			i == j ? ans.mat[i][j] = 1 : ans.mat[i][j] = 0;
	while(n)
	{
		if(n&1)
			ans = mul(ans,a);
		a = mul(a,a);
		n >>= 1;
	}
	return ans;
}


int main(void)
{
	long long int n;
	while(scanf("%lld",&n) > 0)
	{
		if(0 == n || 1 == n)
			printf("%lld\n",n);
		else
		{
			A.mat[0][0] = 1, A.mat[0][1] = 0;
			B.mat[0][0] = 1, B.mat[0][1] = 1;
			B.mat[1][0] = 1, B.mat[1][1] = 0;
			B = pow_mat(B,n);
			printf("%lld\n",mul(A,B).mat[0][0]);
		}
	}
	return 0;
}
