/*************************************************************************
    > File Name: Pro1100.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

int catalan[18] = {
	1,1,2,5,14,42,132,429,1430,4862,16796,58786,208012,742900,2674440,9694845,35357670,129644790
};
int catalanSum[18];
struct Node
{
	Node *left;
	Node *right;
};
Node *createTree(int count, int order)
{
	if(count == 0)
		return NULL;
	Node *re = (Node*)malloc(sizeof(Node));
	re->left = NULL;
	re->right = NULL;
	if(count == 1)
		return re;
	int sonCount = count - 1;
	int t_sortNo = 0;
	for(int i = 0; i <= sonCount; i++)
	{
		for(int j = 1; j <= catalan[i]; j++)
		{
			if(t_sortNo + catalan[sonCount - i] >= order)
			{
				re->left = createTree(i,j);
				re->right = createTree(sonCount-i,order-t_sortNo);
				return re;
			}
			else
				t_sortNo += catalan[sonCount - i];
		}
	}
}
void outputTree(Node *root)
{
	if(root->left != NULL)
	{
		cout<<"(";
		outputTree(root->left);
		cout<<")";
	}
	cout<<"X";
	if(root->right != NULL)
	{
		cout<<"(";
		outputTree(root->right);
		cout<<")";
	}
}
int main(void)
{
	int n;
	catalanSum[0] = 1;
	for(int i = 1; i < 18; i++)
		catalanSum[i] = catalanSum[i-1] + catalan[i];
	while(scanf("%d",&n) && n!=0)
	{
		n++;
		int i = 0;
		while(catalanSum[i] < n && i < 18)
		{
			i++;
		}
		n -= catalanSum[i-1];
		outputTree(createTree(i,n));
		cout<<endl;
	}
	return 0;
}

