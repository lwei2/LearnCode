/*************************************************************************
    > File Name: ImplementTriePrefixTree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct TrieNode
{
	int count;
	map<char, TrieNode*> children;
	TrieNode()
	{
		count = 0;
	}
};


class Trie
{
	public:
		TrieNode *root;
		Trie()
		{
			root = new TrieNode();
		}

		void insert(string word)
		{
			TrieNode *iter = root;
			for(int i = 0; i < word.size(); i++)
			{
				if(iter->children.find(word[i]) == iter->children.end())
				{
					TrieNode *newNode = new TrieNode();
					iter->children[word[i]] = newNode;
				}
				iter = iter->children[word[i]];
			}
			iter->count++;
		}

		bool search(string word)
		{
			TrieNode *iter = findNodeForWord(word);
			if(iter!=NULL && iter->count > 0)
				return true;
			return false;
		}
		TrieNode *findNodeForWord(string word)
		{
			TrieNode *iter = root;
			for(int i = 0; i < word.size(); i++)
			{
				if(iter->children.find(word[i]) == iter->children.end())
					return NULL;
				iter = iter->children[word[i]];
			}
			return iter;
		}

		bool startsWith(string prefix)
		{
			
		}
}
int main(void)
{
	return 0;
}
