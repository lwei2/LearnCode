/*************************************************************************
    > File Name: Pro0168_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

struct Node
{
	int parent = -1;
	int left = 0, right = 0;
};

void printAsRow(std::vector<Node> &tree, int root)
{
    std::vector<int> stack;
    std::vector<int> stack1;
    stack.emplace_back(root);
    int level = 1;
    while (!stack.empty() || !stack1.empty()) {
        if (!stack.empty()) {
            std::cout << "Level " << level << " : ";
            int i = 0;
            for (i = 0; i < stack.size() - 1; ++i) {
                std::cout << stack[i] << ' ';
                if (tree[stack[i]].left != 0) {
                    stack1.emplace_back(tree[stack[i]].left);
                }
                if (tree[stack[i]].right != 0) {
                    stack1.emplace_back(tree[stack[i]].right);
                }
            }
            std::cout << stack[i] << std::endl;
            if (tree[stack[i]].left != 0) {
                stack1.emplace_back(tree[stack[i]].left);
            }
            if (tree[stack[i]].right != 0) {
                stack1.emplace_back(tree[stack[i]].right);
            }
            stack.clear();
            level++;
            continue;
        }
        if (!stack1.empty()) {
            std::cout << "Level " << level << " : ";
            int i = 0;
            for (i = 0; i < stack1.size() - 1; ++i) {
                std::cout << stack1[i] << ' ';
                if (tree[stack1[i]].left != 0) {
                    stack.emplace_back(tree[stack1[i]].left);
                }
                if (tree[stack1[i]].right != 0) {
                    stack.emplace_back(tree[stack1[i]].right);
                }
            }
            std::cout << stack1[i] << std::endl;
            if (tree[stack1[i]].left != 0) {
                stack.emplace_back(tree[stack1[i]].left);
            }
            if (tree[stack1[i]].right != 0) {
                stack.emplace_back(tree[stack1[i]].right);
            }
            stack1.clear();
            level++;
            continue;
        }
    }
}
 
void printAsZigZag(std::vector<Node> &tree, int root)
{
    int level = 1;
    std::vector<int> stack;
    std::vector<int> stack1;
    stack.emplace_back(root);
    while (!stack.empty() || !stack1.empty()) {
        if (!stack.empty()) {
            std::cout << "Level " << level << " from left to right: ";
            int i = 0;
            for (; i < stack.size()-1; ++i) {
                std::cout << stack[i] << ' ';
            }
            std::cout << stack[i] << std::endl;
            for (i = stack.size() - 1; i >= 0; --i) {
                if (tree[stack[i]].right != 0)
                    stack1.emplace_back(tree[stack[i]].right);
                if (tree[stack[i]].left != 0)
                    stack1.emplace_back(tree[stack[i]].left);
            }
            level++;
            stack.clear();
            continue;
        }
        if (!stack1.empty()) {
            std::cout << "Level " << level << " from right to left: ";
            int i = 0;
            for (; i < stack1.size()-1; ++i) {
                std::cout << stack1[i] << ' ';
            }
            std::cout << stack1[i] << std::endl;
            for (i = stack1.size() - 1; i >= 0; --i) {
                if (tree[stack1[i]].left != 0)
                    stack.emplace_back(tree[stack1[i]].left);
                if (tree[stack1[i]].right != 0)
                    stack.emplace_back(tree[stack1[i]].right);
            }
            level++;
            stack1.clear();
            continue;
        }
    }
}
 
int main()
{
    std::vector<Node> tree;
    int n;
    int root;
    int fa, lch, rch;
    std::cin >> n >> root;
    tree.resize(n + 1);
    for (int i = 0; i < n; ++i) {
        std::cin >> fa >> lch >> rch;
        if (lch > 0) {
            tree[fa].left = lch;
            tree[tree[fa].left].parent = fa;
        }
        if (rch > 0) {
            tree[fa].right = rch;
            tree[tree[fa].right].parent = fa;
        }
    }
    
    printAsRow(tree, root);
    printAsZigZag(tree, root);
    return 0;
}
