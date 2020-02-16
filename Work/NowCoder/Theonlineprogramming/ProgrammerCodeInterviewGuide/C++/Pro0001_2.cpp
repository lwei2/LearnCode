/*************************************************************************
    > File Name: Pro0001_2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N = 0, M = 0, K = 0;
	cin>>N>>M>>K;
	vector<vector<int> > val(N, vector<int>(M));
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin>>val[i][j];
		}
	}
	int r = 0, l = M - 1;
	while(r < N && l >= 0)
	{
		if(K == val[r][l])
		{
			cout<<"Yes"<<endl;
			return 0;
		}
		if(K > val[r][l])
			r++;
		else
			l--;
	}
	cout<<"No"<<endl;
	return 0;
}

