
#数据结构基本概念

## 1.绪论
### 1.1 数据结构的基本概念

	数据是所有能被输入到计算机中，且能被计算机处理的符号的集合。
	
	数据元素是数据的基本单位。

	数据项是数据不可分割的最小单位。一个数据元素由若干个数据项组成。
    
    数据元素之间的互相联系方式成为数据的逻辑结构。

    按照数据元素之间的互相联系方式，数据的逻辑结构主要可分为线性结构、树型结构和图型结构三种。

    线性结构是除第一个和最后一个数据元素之外，每个数据元素只有一个唯一的前驱数据元素和一个唯一的后继数据元素。

    树型结构是除根结点外，每个数据元素只有一个唯一的前驱数据元素，可有零个或若干个后继数据元素。

    图型结构是每个数据元素可有零个或若干个前驱数据元素和零个或若干个后继数据元素。

    任何需要计算机进行管理和处理的数据元素都必须首先按某种方式存储在计算机中。

    数据元素在计算机中的存储方式成为数据的存储结构。

    数据存储结构的基本形式有两种：一种是顺序存储结构，一种是链式存储结构。

    顺序存储机构是指把数据元素存储在一块连续地址空间的内存中。其特点是逻辑上相邻的数据元素在物理上也相邻，数据的逻辑关系表现在数据元素的存储位置关系上。

    链式存储结构是使用指针把相互直接关联的结点（即直接前驱结点或直接后继结点)链接起来。其特点是逻辑上相邻的数据元素在物理上（即内存存储位置上）不一定相邻，数据间的逻辑关系表现在结点的链接关系上。

    一种数据类型数据允许进行的某种操作称为数据的操作。

    一种数据类型数据所有的操作称为数据的操作集合。

### 1.2 抽象数据类型
    
    类型是一组值的集合。

    数据类型是指一个类型在定义在这个类型上的操作集合。

    抽象数据类型(ADT)是指一个逻辑概念上的类型和这个类型上的操作集合。

### 1.3 算法和算法的时间复杂度

    算法是描述求解问题方法的操作步骤集合。

    算法要用某种语言来描述

    描述算法的语言主要有三种形式：文字形式，伪代码形式和程序设计语言形式。

    文字形式是指用中文或英文这样的文字来描述算法。

    伪码形式是指用一种仿程序设计语言的语言来描述算法。

    程序设计语言形式是指用某种高级程序设计语言来描述算法，优点是这样的算法描述既简洁易读，又可以直接输入计算机调用或运行。

    任何算法设计都具有输入、输出、有限、确定、可执行的性质。其中输入性指具有零个或若干个输入量，输出性指至少产生一个输出量或执行一个有意义操作，有限性指执行语句的序列是有限的，确定性指每一条语句的含义明确，无二异性，可执行性指每条居于都应在有限的时间内完成。

    程序和算法的唯一区别是程序允许无限循环，而算法不允许无限循环。

    算法设计应满足正确性，可读性，健壮性，高时间效率和高空间效率。

    算法的可读性有利于人们对算法的理解，这既有利于程序的调试和维护，也有利于算法的交流和移植。算法的可读性主要体现在两个方面：一是变量名、常量名、函数名等的命名要见名知意，二是要有足够多的注释。

    算法的健壮性是对当输入非法数据时，算法要能做出适当的处理，而不应产生不可预料的结果。

    算法的时间效率是指运行算法需要花费时间的多少。

    算法的空间效率是指运行算法需要占用的额外内存空间的多少。

    算法的耗时与算法所处理数据个数n的函数关系的分析称作算法的时间效率分析，也称作算法的时间复杂度分析。它通常采用O(f(n))表示。

## 2.线性表

### 2.1 线性表的定义

    线性表是实际应用中最简单，最基本，最常用的一种数据结构。

    线性表的基本特点是元素之间据有一种线性关系，即除第一个元素外，集合中的每个元素均有且只有一个直接前驱；除最后一个元素外，集合中的每个元素均有且只有一个直接后继元素。

    线性表是由n(n>=0)个类型相同的数据元素组成的有序序列，通常表现为L=(a0,a1,a2,...,ai-1,...,an)。
    
    线性表的主要操作特点是可以在任意位置插入和删除一个数据元素。

    顺序表上的插入和删除是顺序表中时间复杂度最高的操作。

    在顺序表中插入和删除一个数据元素的平均时间复杂度均为O(n)。顺序表中的其余操作都与数据元素个数n无关。因此，其余操作的时间复杂度均为O(1)。

    顺序表的主要优点是算法简单，内存单元利用率较高；主要缺点是需要预先确定数据元素的最大个数。	

    线性表可以用顺序存储结构和链式存储结构存储。

    用顺序存储结构实现的线性表称作顺序表。

    用链式存储结构实现的线性表称作链表。

    链表主要有单链表，循环单链表和链表各有优缺点，并且优缺点刚好相反。

    线性表的抽象数据类型主要包括数据集合和该数据集合上的操作集合。

    线性表的数据集合表示为a0,a1,a2,...,ai-1,...,an,每个数据元素的数据类型都是抽象数据元素的数据类型DataType。

    线性表的操作集合主要包括初始化，求当前数据元素个数，插入数据元素，删除数据元素，取数据元素。

### 2.2 线性表的顺序表示和实现

    线性表的抽象数据类型是线性表的逻辑结构，它表示了线性表的数据元素，数据元素间的逻辑关系以及线性表的操作集合。

    顺序存储结构的线性表称作顺序表。

    实现顺序存储结构的方法是使用数组。

    数组有静态数组和动态数组两种。静态数组存储空间的申请和释放由系统自动完成。动态数组存储空间的申请和释放由用于通过调用系统函数自己完成。

```
顺序表操作的实现:
    typedef struct
    {
        DataType list[MaxSize];         //DataType为数组元素的数据类型,MaxSize表示数组的最大元素个数,list表示顺序表数组成员
        int size;                       //size表示顺序表中当前存储的数据元素个数成员，且必须满足条件:size<=MaxSize
    }SeqList;

    1)初始化ListInitiate(L);
        void ListInitiate(SeqList *L)
        {
            L->size = 0;
        }
    2)求当前数据元素个数ListLength(L);
        int ListLength(SeqList *L)
        {
            return L->size;
        }
    3)插入数据元素ListInsert(L,i,x);
        int ListInsert(SeqList *L, int i, DataType x)
        {
            if(L->size >= MaxSize)
            {
                cout<<"顺序表已满无法插入!"<<endl;
                return 0;
            }
            else if(i < 0 || i > L->size)
            {
                cout<<"参数i不合法!"<<endl;
                return 0;
            }
            else
            {
                for(int j = L->size; j > i; j--)
                    L->list[j] = L->list[j-1];
                L->list[i] = x;
                L->size++;
                return 1;
            }
        }
    4)删除数据元素ListDelete(L,i,x);
        int ListDelete(SeqList *L, int i, DataType *x)
        {
            if(L->size<=0)
            {
                cout<<"顺序表已空无数据元素可删!"<<endl;
                return 0;
            }
            else if(i < 0 || i > L->size - 1)
            {
                cout<<"参数i不合法"<<endl;
                return 0;
            }
            else
            {
                *x = L->list[i];
                for(int j = i + 1; i <= L->size - 1;j++) 
                    L->lise[j-1] = L->list[j];
                L->size--;
                return 1;
            }
        }
    5)取数据元素ListGet(L,i,x);
        int ListGet(SeqList *L, int i, DataType *x)
        {
            if(i < 0 || i > L->size -1)
            {
                cout<<"参数i不合法"<<endl;
                return 0;
            }
            else
            {
                *x = L->list[i];
                return 1;
            }
        }

```
### 2.3 线性表的链式表示和实现

    链式存储结构存储线性表数据元素的方法是把存储有数据元素的结点用指针域构造成链。

    把一个由数据元素域及一个或若干个指针域组成的结构体称为一个结点。其中，数据域用来存放数据元素，指针域用来构造数据元素之间的关联关系。

    链式存储结构的特点是数据元素间的逻辑关系表现在结点的链接关系上。

    链式存储结构的线性表称为链表。

    根据指针域的不同和结点构造链的方法不同，链表主要有单链表、单循环链表和双向循环链表三种。

    单链表中，构成链表的结点只有一个指向直接后继结点的指针域。

    单链表中的每个结点结构图:  |数据域|指针域|

    单链表有带头结点结构和不带头结点结构两种。

    把指向单链表的指针称作头指针。
    
    头指针所指向的不存放数据元素的第一个结点称作头结点。

    空指针是一个特殊标识，用来标识链表的结束。空指针在算法描述中用NULL表示。

    在链式存储结构中，链式存储结构初始时为空链。每当有新的数据元素需要存储时，用户才向系统动态申请所需要的存储空间插入链中。

    单链表中的每个结点，是在需要时才向系统申请的，这称作动态内存空间申请。

    动态申请的内存空间，当不再需要时，必须由申请者自己释放。

    若用带头结点的单链表，设头指针为head,则在第一个数据元素结点前插入结点时，不会改变指针head的值，改变的是头指针所指向的头结点的指针域的值。当临时指针变量p等于head时，改变的是p->next的值。若用带头结点的单链表，则删除第一个数据元素时，不会改变头指针head的值，改变的是头指针所指向结点的指针域的值，即改变的是head->next的值。当临时变量p等于head,改变的是指针p->next的值。

    若用不带头结点的单链表，在第一个数据元素前插入结点时，头指针head的值将改变为等于该指针的值。若用不带头结点的单链表，在非第一个数据元素的其他数据元素前插入结点时，头指针head的值不会改变，改变的是指针p->next的值。若用不带头结点的单链表删除第一个数据元素结点时，头指针head的值将改变为等于head->next,即指针head等于原head->next的值。若用不带头结点的单链表，删除其他数据元素结点时头指针head的值将不会改变，改变的是指针p->next的值。

```
单链表结点的结构体定义:
    typedef struct Node
    {
        DataType data;      //用来存放数据元素
        struct Node *next;  //用来存放指向下一个结点的指针
    }SLNode;
单链表的操作实现:
    1)初始化ListInitiate(SLNode **head)
        void ListInitiate(SLNode **head)
        {
            *head = (SLNode*)malloc(sizeof(SLNode));
            (*head)->next = NULL;
        }
    2)求当前数据元素个数:ListLength(SLNode *head)
        int ListLength(SLNode *head)
        {

            SLNode *p = head;
            int size = 0;
            while(p->next!=NULL)
            {
                p=p->next;
                size++;
            }
            return size;
        }
    3)插入ListInsert(SLNode *head, int i, DataType x)
        int ListInsert(SLNode *head, int i, DataType x)
        {
            SLNode *p, *q;
            int j = -1;
            p = head;
            while(p->next!=NULL&&j<i-1)
            {
                p = p->next
                j++;
            }
            if(j!=i-1)
            {
                cout<<"插入位置参数错！"<<endl;
                return 0;
            }
            q = (SLNode *) malloc(sizeof(SLNode));
            q ->data = x;
            q->next = p->next;
            p->next = q;
            return -1;
        }
    4)删除ListDelete(SLNode *head, int i, DataType *x)
        int ListDelete(SLNode *head, int i, DataType *x)
        {
            SLNode *p, *s;
            int j;
            p = head;
            j = -1;
            while(p->next!=NULL&&p->next->next!=NULL&&j<i-1)
            {
                p = p->next;
                j++;
            }
            if(j!=i-1)
            {
                cout<<"删除位置参数错!"<<endl;
                return 0;
            }
            s = p->next;
            *x = s->data;
            p->next = p->next->next;
            free(s);
            return 1;
        }
    5)取数据元素ListGet(SLNode *head, int i, DataType *x)
        int ListGet(SLNode *head, int i , DataType *x)
        {
            SLNode *p;
            int j;
            p = head;
            j = -1;
            while(p->next!=NULL&&j<i)
            {
                p = p->next;
            }
            if(j!=i)
            {
                cout<<"取元素位置参数错!"<<endl;
                return 0;
            }
            *x = p->data;
            return 1;
        }
    6)撤销单链表Destroy(SLNode **head)
        void *Destroy(SLNode **head)
        {
            SLNode *p,*tmp;
            p = *head;
            while(p!=NULL)
            {
                tmp = p;
                p = p->next;
                free(tmp);
            }
            *head = NULL;
        }
```
    单链表的插入和删除操作的时间效率分析方法与顺序表的插入和删除操作的时间效率分析方法类同，差别是单链表的插入和删除操作不需要移动数据元素，只需要比较数据元素，因此，在单链表中插入一个数据元素，比较数据元素的平均次数为n/2。删除单链表中的一个数据元素，比较数据元素的平均次数为(n-1)/2。

    与顺序表相比，单链表的主要优点是不需要预先确定数据元素的最大个数；主要缺点是每个结点中要有一个指针域，因此空间单元利用率不高，而且单链表操作的算法较复杂。

   循环单链表是单循环的另外一种形式，其结构特点是链表中最后一个结点的指针域不再是结束标记，而是指向整个链表的第一个结点，从而使链表形成一个环。和单链表相比，循环单链表也有带头结点结构和不带头结点结构两种，带头结点的循环单链表实现插入和删除操作较为方便。

   单链表的特点是从链表头到链表尾比较方便，但无法从链表尾到链表头。和单链表相比，循环单链表的长处是从链表尾到链表头比较方便。当要处理的数据元素序列具有环型结构特点时，适于采用循环单链表。

    双向链表中，每个结点除后继指针域和前驱指针域。

    双向链表有带头结点结构和不带头结点结构两种。

    在双向循环链表中，每个结点包括三个域，分别是data域，next域和prior域。其中，data域为数据域,next域为指向后继结点的指针域，prior域为指向前驱结点的指针域。

```
双循环链表结点的结构体:
    typedef struct Node
    {
        DataType data;
        struct Node *next;
        struct Node *prior;
    }DLNode;
    1)初始化
        void ListInitiate(DLNode **head)
        {
            *head = (DLNode *)malloc(sizeof(DLNode));
            (*head)->prior = *head;
            (*head)->next = *head;
        }
    2)插入
        int ListInsert(DLNode *head, int i, DataType x)
        {
            DLNode *p, *s;
            int j;
            p = head->next;
            j = 0;
            while(p!=head && j < i)
            {
                p = p->next;
                j++;
            }
            if(j!=i)
            {
                cout<<"插入位置参数出错!"<<endl;
                return 0;
            }
            s = (DLNode *)malloc(sizeof(DLNode));
            s->data = x;

            s->prior = p->prior;
            p->prior->next = s;
            s->next = p;
            p->prior = s;

            return 1;
        }
    3)删除
        int ListDelete(DLNode *head, int i, DataType *x)
        {
            DLNode *p;
            int j;
            p = head->next;
            j = 0;
            while(p->next!=head && j<i)
            {
                p = p->next;
                j++;
            }
            if(j!=i)
            {
                cout<<"删除位置参数出错!"<<endl;
                return 0;
            }
            p->prior->next = p->next;
            p->next->prior = p->prior;
            free(p);
            return 1;
        }
    4)求当前数据元素个数
        int ListLength(DLNode *head)
        {
            DLNode *p = head;
            int size = 0;
            while(p->next!= head)
            {
                p = p->next;
                size++;
            }
            return size;
        }
    5)撤销内存空间
        void Destroy(DLNode **head)
        {
            DLNode *p,*tmp;
            int i, n = ListLength(*head);
            p = *head;
            for(i = 0; i <=n; i++)
            {
                tmp = p;
                p = p->next;
                free(tmp);
            }
            *head = NULL;
        }
```
### 2.4 静态链表

    在链式存储结构中，实现数据元素之间的次序关系依靠指针。

    相对于申请结点内存空间的动态性来说，数组内存空间的申请方式是静态的，故这种存储结构称作静态链表。

    静态链表中增加了指针仿真了链式存储结构中的指针，故而静态链表中的指针称作仿真指针。

## 3.堆栈和队列

    堆栈和队列都是特殊的线性表。

    线性表、堆栈和队列三者的数据元素以及数据元素之间的逻辑关系完全相同，差别是线性表的插入和删除操作不受限制，而堆栈只能在栈顶插入和删除，队列只能在队尾插入，在队头删除。堆栈和队列都可以分别用顺序存储结构和链式存储结构存储。顺序队列通常采用顺序循环队列方法实现，因为顺序循环队列可以避免顺序队列的"假溢出"问题。

    堆栈可以用来完成数据元素序列的特定转换，队列可以用作数据元素序列的缓冲存储。

### 3.1 堆栈
    堆栈是一种特殊的线性表，堆栈的数据元素以及数据元素间的逻辑关系和线性表完全相同，其差别是线性表允许在任意位置插入和删除数据元素操作，而堆栈只允许在固定一端进行插入和删除数据元素操作。

    堆栈中允许进行插入和删除数据元素操作的一端称为栈顶，另一端称为栈底。栈顶的当前位置是动态的，标识栈顶当前位置的变量称为栈顶指示器（或栈顶指针）。堆栈的插入和删除操作通常称为进栈或入栈，堆栈的删除操作通常称为出栈或退栈。

    根据堆栈的定义，每次进栈的数据元素都放在原当前栈顶元素之间而成为新的栈顶元素，每次退栈的数据元素都是原当前栈顶元素，即最后进入堆栈的数据元素总是最先推出堆栈，因此，堆栈也称作后进先出的线性表，或简称后进先出表。

    堆栈的数据集合可以表示为a0a1...an-1,每个数据元素的数据类型为DataType。

```
    堆栈操作集合:
        1)初始化堆栈S:void StackInitiate(S)
        2)非空否:int StackNotEmpty(S)
        3)入栈:StackPush(S,x)
        4)出栈:int StackPop(S,d)
        5)取栈顶元素:StackTop(S,d)
```
    顺序存储结构的堆栈称作顺序堆栈。
```
顺序堆栈定义:
    typedef struct 
    {
        DataType stack[MaxStackSize];
        int top;
    }SeqStack;
顺序堆栈的操作实现:
    1)初始化:
        void StackInitiate(SeqStack *S)
        {
            S->top = 0;
        }
    2)非空否:
        int StackNotEmpty(SeqStack *S)
        {
            if(S->top <= 0)
                return 0;
            else
                return 1;
        }
    3)入栈:
        int StackPush(SeqStack *S, DataType x)
        {
            if(S->top >= MaxStackSize)
            {
                cout<<"堆栈已满，无法插入!"<<endl;
                return 0;
            }
            else
            {
                S->stack[S->top] = x;
                S->top ++;
                return 1;
            }
        }
    4)出栈:
        int StackPop(SeqStack *S, DataType *d)
        {
            if(S->top <= 0)
            {
                cout<<"堆栈已空无数据元素出栈!"<<endl;
                return 0;
            }
            else
            {
                S->top--;
                *d = S->stack(S->top);
                return 1;
            }
        }
    5)取栈顶元素
        int StackTop(SeqStack *S, DataType *d)
        {
            if(S->top <=0)
            {
                cout<<"堆栈已空"<<endl;
                return 0;
            }
            else
            {
                *d = S->stack(S.top-1);
                return 1;
            }
        }
```
    顺序堆栈所有操作的时间复杂度均为O(1)。

    链式存储结构的堆栈称作链式堆栈。

    堆栈有两端，插入元素和删除元素的一端为栈顶。另一端为栈底。对链式堆栈来说，若把靠近头指针的一端定义为栈顶，则插入元素和删除元素时不需要遍历整个链。其时间复杂度为O(1)。否则，若把远离头指针的一端为栈顶，则每次插入元素和删除元素时都需要遍历整个链。其时间复杂度为O(n)。

```
链式堆栈结点的结构体定义:
    typedef struct 
    {
        DataType data;
        struct snode *next;
    }LSNode;
带头结点链式堆栈操作的实现:
    1)初始化:
        void StackInitiate(LSNode **head)
        {
            *head = (LSNode *)malloc(sizeof(LSNode));
            (*head)->next = NULL;
        }
    2)非空否:
        int StackNotEmpty(LSNode *head)
        {
            if(head->next == NULL)
                return 0;
            else
                return 1;
        }
    3)入栈:
        void StackPush(LSNode *head, DataType x)
        {
            LSNode *p;
            p = (LSNode *)malloc(sizeof(LSNode));
            p->data = x;
            p->next = head->next;
            head->next = p;
        }
    4)出栈:
        int StackPop(LSNode *head, DataType *d)
        {
            LSNode *p = head->next;
            if(p == NULL)
            {
                cout<<"堆栈已空出错"<<endl;
                return 0;
            }
            head->next = p->next;
            *d = p->data;
            free(p);
            return 1;
        }
    5)取栈顶数据元素
        int StackTop(LSNode *head, DataType *d)
        {
            LSNode *p = head->next;
            if(p == NULL)
            {
                cout<<"堆栈已空出错"<<endl;
                return 0;
            }
            *d = p->data;
            return 1;
        }
    6)撤销动态申请空间:
        void Destroy(LSNode *head)
        {
            LSNode *p, *tmp;
            p = head;
            while(p!=NULL)
            {
                tmp = p;
                p = p->next;
                free(tmp);
            }
        }
```
    链式堆栈所有操作的时间复杂度均为O(l)。

## 3.2 队列

    队列是一种特殊的线性表,队列的数据元素及数据元素之间的逻辑关系和线性表的完全相同，其差别是线性表允许在任意插入和删除数据元素。而队列只允许在其一端进行插入操作，在其另一端进行删除操作。

    队列中允许进行插入操作的一端称为队尾，允许进行删除操作的一端称为队头。队头和队尾分别队头指示器（或称队头指针）和队尾指示器（或队尾指针）。队列的插入操作通常称作入队列，队列的删除操作通常称作出队列。

    根据队列的定义，每次入队列的数据元素都放在原来的队尾数据元素之后称为新的队尾元素，每次出队列的数据元素都是原来队头元素。故而最先入队列的数据元素总是最先出队列。所以队列是一种先进先出的线性表，简称先进先出表。






    
    
    
   一棵树最上面的节点称为根节点。

	若一个节点由连接多个节点，那么该节点称为父节点，它的多个节点称为子节点。

	没有任何节点的节点称为叶子节点。

	具有相同父节点的节点互称为兄弟节点。

	节点拥有的子树数称为节点度。

	从根节点开始自顶而下逐层累加。


	二叉树是每个节点最多由两个子树的树结构。

	二叉树满足：1.每个节点的度都大于2;
				2.每个节点的孩子节点不能任意颠倒。


