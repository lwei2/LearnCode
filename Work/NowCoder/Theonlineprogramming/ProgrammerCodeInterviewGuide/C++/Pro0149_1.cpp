/*************************************************************************
    > File Name: Pro0149_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

void printfArray(vector<vector<int>> &arr, int row1, int col1, int row2, int col2)
{
	if(row1 == row2)
		while(col1 <= col2)
			cout<<arr[row1][col1++]<<" ";
	else if(col1 == col2)
		while(row1 <= row2)
			cout<<arr[row1++][col1]<<" ";
	else
	{
		for(int j = col1; j < col2; j++)
			cout<<arr[row1][j]<<" ";
		for(int i = row1; i < row2; i++)
			cout<<arr[i][col2]<<" ";
		for(int j = col2; j > col1; j--)
			cout<<arr[row2][j]<<" ";
		for(int i = row2; i > row1; i--)
			cout<<arr[i][col1]<<" ";
	}
}

int main(void)
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> arr(n,vector<int>(m,0));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>arr[i][j];
	int row1 = 0, col1 = 0;
	int row2 = n - 1, col2 = m - 1;
	while(row1 <= row2 && col1 <= col2)
	{
		printfArray(arr,row1++, col1++, row2--, col2--);
	}
	return 0;
}
