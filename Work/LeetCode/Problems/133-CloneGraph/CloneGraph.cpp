/*************************************************************************
    > File Name: CloneGraph.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Node
{
	public:
		int val;
		vector<Node*> neighbors;
		Node()
		{

		}
		Node(int _val, vector<Node*> _neighbors)
		{
			val = _val;
			neighbors = _neighbors;
		}
};

class Solution
{
	map<Node*, Node *> mCache;
	public:
		Node *Clone(Node *node)
		{
			if(!node || mCache.count(node) > 0)
				return mCache[node];
			Node *newNode = new Node(node->val);
			mCache[node] = newNode;
			for(int i = 0; i < node->neighbors.size(); i++)
			{
				newNode->neighbors.push_back(Clone(node->neighbors[i]));
			}
			return newNode;
		}
		Node *cloneGraph(Node *node)
		{
			return Clone(node);
		}
};



int main(void)
{
	return 0;
}
