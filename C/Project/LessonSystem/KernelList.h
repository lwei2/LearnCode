/*************************************************************************
    > File Name: KernelList.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#ifndef _KERNEL_LIST_H_
#define _KERNEL_LIST_H_

typedef struct node{
    struct node *next,*prev;
}Node_t;

#define   INIT_HEAD(name)    Node_t  name={.next=&name,.prev=&name}

static inline void INIT_ENTRY(Node_t *entry)
{
    entry->next=entry;
    entry->prev=entry;
}

static inline void InsertEntry(Node_t *New,Node_t *P,Node_t *N)
{
    New->next=N;
    New->prev=P;
    N->prev  =New;
    P->next  =New;
}

static inline void AddList(Node_t *New,Node_t *head)
{
    InsertEntry(New,head,head->next);
}
static inline void AddListTail(Node_t *New,Node_t *head)
{
    InsertEntry(New,head->prev,head);
}

static inline void _del_list(Node_t *P,Node_t *N)
{
    P->next=N;
    N->prev=P;
}
static inline void DelInit(Node_t *entry)
{
    _del_list(entry->prev,entry->next);
    INIT_ENTRY(entry);//让该节点自身指向自身
}

#define  OFFSET(type,member)   (unsigned long)&((type *)0)->member
//根据type结构member成员的地址ptr反推出type类型的结构起始地址
#define  container_of(ptr, type, member) \
             (type *)((void *)ptr-OFFSET(type,member))

#define  list_entry_each(pos,head)     \
          for(pos=(head)->next;pos!=(head);pos=pos->next)

#define  list_entry_safe(pos,n,head)   \
          for(pos=(head)->next,n=pos->next;pos!=(head);pos=n,n=n->next)

static inline int IsEmptyList(Node_t *head)
{
     return head->next==head;
}
#endif  //














