/*************************************************************************
    > File Name: Pro0001_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
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
