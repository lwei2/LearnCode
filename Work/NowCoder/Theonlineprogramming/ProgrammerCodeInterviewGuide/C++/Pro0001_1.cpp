/*************************************************************************
    > File Name: Pro0001_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	题目描述:给定一个N \times MN×M的整形矩阵matrix和一个整数K, matrix的每一行和每一列都是排好序的。实现一个函数，判断K是否在matrix中
	[要求]时间复杂度为O(N+M)O(N+M)，额外空间复杂度为O(1)O(1)。
	输入描述:
	第一行有三个整数N, M, K接下来N行，每行M个整数为输入的矩阵
	输出描述:
		若K存在于矩阵中输出"Yes"，否则输出"No"
	示例1
	输入
		2 4 5
		1 2 3 4
		2 4 5 6
	输出
		Yes
	示例2
	输入
		2 4 233
		1 2 3 4
		2 4 5 6
	输出
		No
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N,M,K;
	cin>>N>>M>>K;

	int num;
	vector<int> tmp;
	vector<vector<int>> nMatrix;

	for(int i = 0; i < N; i++)
	{
		tmp.clear();
		for(int j = 0; j < M; j++)
		{
			cin>>num;
			tmp.push_back(num);
		}
		nMatrix.push_back(tmp);
	}
/*	for(int i = 0; i < nMatrix.size(); i++)
	{
		for(int j = 0; j < nMatrix[0].size(); j++)
		{
			printf("%d ", nMatrix[i][j]);
		}
		printf("\n");
	}*/
	bool bFlag = false;
	for(int i = 0; i < nMatrix.size(); i++)
	{
		for(int j = 0; j < nMatrix[0].size(); j++)
		{
			if(K == nMatrix[i][j])
				bFlag = true;
		}
	}
	if(bFlag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
