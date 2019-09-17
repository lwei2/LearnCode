/*************************************************************************
    > File Name: Pro4.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :对于一个有向图，请实现一个算法，找出两点之间是否存在一条路径。
给定图中的两个结点的指针DirectedGraphNode* a, DirectedGraphNode* b(请不要在意数据类型，图是有向图),请返回一个bool，代表两点之间是否存在一条路径(a到b或b到a)。
 ************************************************************************/


#include <iostream>

using namespace std;

struct UndirectedGraphNode
{
	int label;
	vector<struct UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x)
	{

	}
};

class Path
{
	public:
		bool checkPath(UndirectedGraphNode *a, UndirectedGraphNode *b)
		{
			if(a == b)
				return true;
			queue<UndirectedGraphNode*> a_to_b, b_to_a;
			a_to_b.push(a);
			set<UndirectedGraphNode*>Set;
			Set.insert(a);
			while(!a_to_b.empty())
			{
				for(auto node : a_to_b.front()->neighbors)
				{
					if(node == b)
						return true;
					if(Set.find(node) == Set.end())
					{
						a_to_b.push(node);
						Set.insert(node);
					}
				}
				a_to_b.pop();
			}
			Set.clear();
			Set.insert(b);
			b_to_a.push(b);
			while(!b_to_a.empty())
			{
				for(auto node : b_to_a.front()->neighbors)
				{
					if(node == a)
						return true;
					if(Set.find(node) == Set.end())
					{
						b_to_a.push(node);
						Set.insert(node);
					}
				}
				b_to_a.pop();
			}
			return false;
		}
};

int main(void)
{
	return 0;
}
