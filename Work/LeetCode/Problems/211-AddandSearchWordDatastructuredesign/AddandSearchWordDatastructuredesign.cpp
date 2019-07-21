/*************************************************************************
    > File Name: AddandSearchWordDatastructuredesign.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Node
{
	public:
		Node(char c):val(c), ends(false)
		{

		}
		Node():ends(false)
		{

		}
		char val;
		bool ends;
		std::vector<Node*> children;
};

class WordDictionary
{
	public:
		WordDictionary()
		{
			root = new Node();
		}
		void addWord(string word)
		{
			Node *it = root;
			for(char ch : word)
			{
				bool exist = false;
				for(Node *child : it->children)
				{
					if(child->val == ch)
					{
						it = child;
						exist = true;
						break;
					}
				}
				if(!exist)
				{
					Node *child = new Node(ch);
					it->children.push_back(child);
					it = child;
				}
			}
			it->ends = true;
		}
		bool search(string word)
		{
			vector<Node*> level;
			level.push_back(root);
			for(char ch : word)
			{
				vector<Node *> newLevel;
				bool exist = false;
				if(ch != '.')
				{
					for(Node *node : level)
					{
						for(Node *child : node->children)
						{
							if(child->val == ch)
							{
								newLevel.push_back(child);
								exist = true;
							}
						}
					}
					if(!exist)
						return false;
				}
				else
				{
					for(Node *node : level)
					{
						for(Node *child : node->children)
						{
							newLevel.push_back(child);
						}
					}
					exist = true;
				}
				level = move(newLevel);
			}
			for(Node *node :level)
			{
				if(node->ends)
					return true;
			}
			return false;
		}
	private:
		Node *root;
};
int main(void)
{
	return 0;
}
