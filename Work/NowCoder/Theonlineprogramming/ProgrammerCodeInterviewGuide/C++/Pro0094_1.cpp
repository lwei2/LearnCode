/*************************************************************************
    > File Name: Pro0094_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void NQueenSolve(long &N, long row, long ld, long rd, long &count)
{
	if(row == N)
		count++;
	else
	{
		long pos = N & ~(row | ld | rd);
		while(pos)
		{
			long p = pos & (~pos + 1);
			pos = pos - p;
			NQueenSolve(N, row | p, (ld | p)<<1, (rd | p)>>1,count);
		}
	}
}

int main(void)
{
	int n;
	cin>>n;

	long N = 1;
	long count = 0;
	N = (N << n) - 1;
	NQueenSolve(N,0,0,0,count);
	cout<<count;
	return 0;
}
