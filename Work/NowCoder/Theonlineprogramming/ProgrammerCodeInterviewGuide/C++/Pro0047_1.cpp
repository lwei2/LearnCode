/*************************************************************************
    > File Name: Pro0047_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define mod 1000000007
#define X 1000000007

bool valid(string str, int len)
{
	for(int i = 0; i < len; i+=2)
	{
		if(str[i] != '0' && str[i] != '1')
			return false;
		for(int i = 1; i < len; i+=2)
		{
			if(str[i] != '&' && str[i]!='|' && str[i] != '^')
				return false;
		}
		return true;
	}
}

int main(void)
{
	string exp, tmp;
	cin>>exp>>tmp;
	int tar = (tmp == "true" ? 1 : 0);
	int n = exp.size();
	int len = n;
	if(n % 2 == 0 || !valid(exp,n))
	{
		cout<<"0";
		return 0;
	}
	if(n <= 2)
	{
		cout<<'false';
		return 0;
	}
	int dp[500][500][2];
	vector<long long> temp(len, 0);
	vector<vector<long long> > T(len, temp);
	vector<vector<long long> > F(len, temp);
	for(int i = 0; i < n; i+=2)
	{
		dp[i][i][1] = exp[i] == '1' ? 1 : 0;
		dp[i][i][0] = exp[i] == '0' ? 1 : 0;
		T[i][i] = exp[i] == '1' ? 1 : 0;
		F[i][i] = exp[i] == '0' ? 1 : 0;
	}
	for(int i = 0; i < n; i += 2)
	{
		for(int j = i - 2; j >= 0; j -= 2)
		{
			for(int k = j; k < i; k += 2)
			{
				if(exp[k+1] == '&')
				{
					T[j][i] += T[j][k]*T[k+2][i];
					F[j][i] += (T[j][k] * F[k+2][i] + F[j][k]*T[k+2][i] + F[j][k]*F[k+2][i]);
					T[j][i]%=X;
					F[j][i]%=X;
				}
				else if(exp[k+1] == '|')
				{
					T[j][i] += (T[j][k]*F[k+2][i] + F[j][k]*T[k+2][i] + T[j][k]*T[k+2][i]);
					F[j][i] += F[j][k]*F[k+2][i];
					T[j][i]%=X;
					F[j][i]%=X;
				}
				else
				{
					T[j][i] += (F[j][k]*T[k+2][i] + T[j][k]*F[k+2][i]);
					F[j][i] += (F[j][k]*F[k+2][i] + T[j][k]*T[k+2][i]);
					T[j][i]%=X;
					F[j][i]%=X;
				}
			}
		}
	}
	if(tar == 0)
		cout<<F[0][len-1];
	else
		cout<<T[0][len-1];
	return 0;
}
