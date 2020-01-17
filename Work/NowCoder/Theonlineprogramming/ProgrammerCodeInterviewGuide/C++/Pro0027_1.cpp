/*************************************************************************
    > File Name: Pro0027_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
    题目描述
给定一个矩阵matrix，其中的值有正、有负、有0，返回子矩阵的最大累加和
例如，矩阵matrix为：
-90 48 78
64 -40 64
-81 - 7 66
其中，最大的累加和的子矩阵为：
48 78
-40 64
-7 66
所以返回累加和209。
例如，matrix为：
-1 -1 -1
-1 2 2
-1 -1 -1
其中，最大累加和的子矩阵为：
2 2
所以返回4
[要求]
时间复杂度为O(n^2m)O(n 
2
 m)，空间复杂度为O(nm)O(nm)

输入描述:
第一行有两个整数N，M。分别表示矩阵的行数/列数
接下来N行，每行M个整数表示矩阵内的数
输出描述:
输出一个整数表示答案
示例1
输入
复制
3 3
-90 48 78
64 -40 64
-81 -7 66
输出
复制
209
示例2
输入
复制
3 3
-1 -1 -1
-1 2 2
-1 -1 -1
输出
复制
4
备注:
1 \leqslant N, M \leqslant 2001⩽N,M⩽200
-100 \leqslant arr_{i,j} \leqslant 100−100⩽arr 
i,j
​	
 ⩽100
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
	int **arr=(int**)malloc(sizeof(int*)*m);
	for(int i = 0; i < m; i++)
		arr[i] = (int*)malloc(sizeof(int)*n);
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d",&arr[i][j]);
	int ans = INT_MIN;
	int *tmp = (int*)malloc(sizeof(int)*n);
	for(int i = 0; i < m; i++)
	{
		memset(tmp, 0, sizeof(int)*n);
		for(int j = i; j < m; j++)
		{
			for(int k = 0; k < n; k++)
				tmp[k] += arr[j][k];
			int cur;
			for(int k = 0; k < n; k++)
			{
				if(k == 0 || cur < 0)
					cur  = tmp[k];
				else
					cur += tmp[k];
				if(cur > ans)
					ans = cur;
			}
		}
	}
	free(tmp);
	printf("%d\n",ans);
	return 0;
}
