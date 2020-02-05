/*************************************************************************
    > File Name: Pro0187_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node
{
	int happy = 0;
	int parent = -1;
	vector<int> child;
	int subTreeMaxHappy = 0;
};

int calcSubTreeMaxHappy(vector<Node> &inputs, int index)
{
	auto &node = inputs[index];
	if(node.child.empty())
		return node.happy;
	if(node.subTreeMaxHappy != 0)
		return node.subTreeMaxHappy;
	int total1 = node.happy, total2 = 0;
	for(int i = 0; i < node.child.size(); ++i)
	{
		auto &childIndex = node.child[i];
		for(int j = 0; j < inputs[childIndex].child.size(); ++j)
		{
			total1 += calcSubTreeMaxHappy(inputs, inputs[childIndex].child[j]);
		}
	}
	for(int i = 0; i < node.child.size(); ++i)
		total2 += calcSubTreeMaxHappy(inputs, node.child[i]);
	node.subTreeMaxHappy = max(total1, total2);
	return node.subTreeMaxHappy;
}

int main(void)
{
	int n,root;
	vector<Node> inputs;
	Node node;
	cin>>n>>root;
	inputs.resize(n+1);
	for(int i = 1; i < n + 1; ++i)
		cin>>inputs[i].happy;
	int a,b;
	for(int i = 0; i < n - 1; ++i)
	{
		cin>>a>>b;
		inputs[b].parent = a;
		inputs[a].child.emplace_back(b);
	}
	cout<<calcSubTreeMaxHappy(inputs, root)<<endl;
	return 0;
}
