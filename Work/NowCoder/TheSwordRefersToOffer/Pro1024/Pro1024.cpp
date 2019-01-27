/*************************************************************************
    > File Name: Pro1024.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
 ************************************************************************/

#include<iostream>

using namespace std;
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead)
            return NULL;
        nodeClone(pHead);
        connectRandom(pHead);
        return reconnect(pHead);
    }
    void nodeClone(RandomListNode *head)
    {
        RandomListNode *pNode = head;
        while(pNode != NULL)
        {
            RandomListNode *pClone = new RandomListNode(pNode->label);
            pClone->next = pNode->next;
            pNode->next = pClone;
            pNode = pClone->next;
        }
    }
    void connectRandom(RandomListNode *head)
    {
        RandomListNode *pNode = head;
        while(pNode!=NULL)
        {
            RandomListNode *pClone = pNode->next;
            if(pNode->random)
                pClone->random = pNode->random->next;
            pNode = pClone->next;
        }
    }
    RandomListNode *reconnect(RandomListNode *head)
    {
        RandomListNode *pNode = head;
        RandomListNode *result = head->next;
        while(pNode != NULL)
        {
            RandomListNode *pClone = pNode->next;
            pNode->next = pClone->next;
            pNode = pNode->next;
            if(pNode != NULL)
                pClone->next = pNode->next;
        }
        return result;
    }
};
int main(void)
{
	return 0;
}
