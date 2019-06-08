/*************************************************************************
    > File Name: SurroundedRegions.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		void dfs(vector<vector<char> >& board, vector<vector<bool> >&  visited, int i, int j)
		{
			if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size())
				return;
			if(visited[i][j] || board[i][j] == 'X')
				return;
			visited[i][j] = true;
			dfs(board, visited, i + 1, j);
			dfs(board, visited, i - 1, j);
			dfs(board, visited, i, j + 1);
			dfs(board, visited, i, j - 1);


		}
		void solve(vector<vector<char> >& board)
		{
			if(board.empty())
				return;
			int row = board.size();
			int col = board[0].size();
			vector<vector<bool> > visited(row, vector<bool>(col, false));
			for(int i = 0; i < row; i += row - 1)
			{
				for(int j = 0; j < col; j++)
				{
					if(board[i][j] == 'O')
						dfs(board, visited, i, j);
					else
						visited[i][j] = 'X';
				}
				if(row == 0 || row == 1)
					break;
			}
			for(int j = 0; j < col; j += col - 1)
			{
				for(int i = 0; i < row; i++)
				{
					if(board[i][j] == 'O')
						dfs(board, visited, i, j);
					else
						visited[i][j] = 'X';
				}
				if(col == 0 || col == 1)
					break;
			}
			for(int i =0; i < row; i++)
			{
				for(int j = 0; j < col; j++)
				{
					if(!visited[i][j])
						board[i][j] = 'X';
				}
			}
		}
};

int main(void)
{
	return 0;
}
