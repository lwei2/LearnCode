/*************************************************************************
    > File Name: WordSearch.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		void dfs(vector<vector<char> >& board, string word, int i, int j, int index, bool &found)
		{
			if(found || index == word.size())
			{
				found = true;
				return ;
			}
			if( i < 0 || i >= board.size() || j >= board[i].size() || j <0 || board[i][j]!=word[index] || board[i][j] == '#')
			{
				return;
			}
			board[i][j] = '#';
			dfs(board,word,i+1,j,index+1,found);
			dfs(board,word,i-1,j,index+1,found);
			dfs(board,word,i,j+1,index+1,found);
			dfs(board,word,i,j-1,index+1,found);
			board[i][j] = word[index];
		}
		bool exist(vector<vector<char> >&board, string word)
		{
			if(board.empty())
				return false;
			if(word.empty())
				return false;
			int index = 0;
			bool found = false;
			for(int i = 0; i < board.size(); i++)
			{
				for(int j = 0; j < board[i].size(); j++)
				{
					if(board[i][j] == word[index])
					{
						dfs(board,word,i,j,index,found);
						if(found)
							return true;
					}
				}
			}
			return false;
		}

};
