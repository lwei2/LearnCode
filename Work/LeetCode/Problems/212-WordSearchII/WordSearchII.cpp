/*************************************************************************
    > File Name: WordSearchII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	private:
		int height_, width_;
		vector<string> ans_;
		const int drx[4] = {1,0,-1,0},dry[4] = {0,1,0,-1};
		struct TrieNode
		{
			TrieNode *next[26];
			bool isending = false;
			string word;
			TrieNode()
			{
				for(int i = 0; i < 26; ++i)
					next[i] = NULL;
			}
		};
		TrieNode *constructTrie(vector<string> &words)
		{
			TrieNode *head = new TrieNode();
			for(string &word :words)
			{
				TrieNode *current = head;
				for(int i = 0, len = word.size(); i < len; ++i)
				{
					int index = word[i] - 'a';
					if(current->next[index] == NULL)
						current->next[index] = new TrieNode();
					current = current->next[index];
				}
				current->isending = true;
				current->word = word;
			}
			return head;
		}

		void findWords(TrieNode *head, vector<vector<char> > &board)
		{
			for(int i = 0; i < height_; ++i)
				for(int j = 0; j < width_; ++j)
					findWords(head,board, i,j);
		}
		void findWords(const TrieNode *head, vector<vector<char> > &board, const int x, const int y)
		{
			char ch = board[x][y];
			int index = ch - 'a';
			if(head->next[index])
			{
				TrieNode *next = head->next[index];
				if(next->isending)
				{
					ans_.push_back(next->word);
					next->isending = false;
				}
				board[x][y] = '\0';
				for(int i = 0; i < 4; ++i)
				{
					int x2 = x + drx[i], y2 = y + dry[i];
					if(x2 >= 0 && x2 < height_ && y2 >= 0 && y2 < width_ && board[x2][y2] != '\0')
						findWords(next, board, x2, y2);
				}
				board[x][y] = ch;
			}
		}
	public:
		vector<string> findWords(vector<vector<char> > &board, vector<string> &words)
		{
			if(board.empty() || board[0].empty() || words.empty())
				return {};
			height_ = board.size();
			width_ = board[0].size();

			TrieNode *head = constructTrie(words);
			findWords(head, board);
			return ans_;
		}
};


int main(void)
{
	return 0;
}
