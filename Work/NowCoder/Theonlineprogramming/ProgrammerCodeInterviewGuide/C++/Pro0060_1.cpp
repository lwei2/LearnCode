/*************************************************************************
    > File Name: Pro0060_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void inPrint(vector<bool> &tree, int index)
{
	if(index >= tree.size())
		return;
	inPrint(tree, index*2 + 1);
	printf("%s\n",tree[index] ? "up":"down");
	inPrint(tree, index*2 + 2);
}


int main(void)
{
	int count = 0;
	scanf("%d",&count);
	if(count < 0)
	{
		printf("-1");
		return 0;
	}
	vector<bool> tree(pow(2,count) - 1, false);
	int endIndex = 0, curIndex = 0;
	while(endIndex < tree.size())
	{
		bool flag = false;
		while(curIndex <= endIndex)
		{
			if(flag)
				tree[curIndex] = true;
			flag = !flag;
			curIndex++;
		}
		endIndex = 2*(endIndex + 1);
	}
	inPrint(tree,0);
	return 0;
}
