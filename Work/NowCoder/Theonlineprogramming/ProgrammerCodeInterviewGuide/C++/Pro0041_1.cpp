/*************************************************************************
    > File Name: Pro0041_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);
	vector<vector<int>> matrix(n, vector<int> (n,0));
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
			scanf("%d",&matrix[i][j]);
	}
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(matrix[i][j] == 0)
				continue;
			int max_len = min(n-i, n-j);
			for(int k = 1; k < max_len; ++k)
			{
				if(matrix[i+k][j] == 0)
				{
					max_len = k;
					break;
				}
			}
			for(int k = 1; k < max_len; ++k)
			{
				if(matrix[i][j+k] == 0)
				{
					max_len = k;
					break;
				}
			}
			if(max_len <= res)
				continue;
			while(max_len)
			{
				bool flag = false;
				for(int k = 1; k < max_len; ++k)
				{
					if(matrix[i+max_len - 1][j+k] == 0 || matrix[i+k][j+max_len - 1] == 0)
					{
						flag = true;
					}
				}
				if(!flag)
				{
					res = max(res, max_len);
					break;
				}
				max_len--;
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
