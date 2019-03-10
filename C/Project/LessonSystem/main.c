/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "KernelList.h"

#define    SIZE    32
#define    NR      sizeof(info)/sizeof(info[0])

enum key{
    UP,
    DOWN,
    ENTER,
    UNKNOW,
};
//课程结构
typedef struct{
    int     LesId;
    char    LesName[SIZE];
    int     LesCount;//该课程被选修人数

    Node_t  LesNext;  //课程主链
    Node_t  LesSelect;//课程被选修的链表头
}Lesson_t;

//学生结构
typedef struct{
    int     StuId;
    char    StuName[SIZE];
    int     StuAge;

    Node_t  StuNext;  //学生主链
    Node_t  StuSelect;//学生选修课程的链表头
}Student_t;
//公共节点 关联学生与课程
typedef struct{
    Student_t   *s;//指向学生的指针
    Lesson_t    *l;//指向课程的指针

    Node_t StuList;//学生选修的链
    Node_t LesList;//课程被选修的链
}Item_t;

void InitLesson(Node_t *LH);
int  GetSelect(void);
void ShowMenu(char *info[],int n,int index);
int  GetKey(void);

void AddStudent(Node_t *SH,const Node_t *LH);
void IsSelect(Student_t *stup,const Node_t *LH);

void SearchStudent(const Node_t *SH);
void SearchLesson(const Node_t *LH);
void AnyKey(void);

int main(void)
{
    INIT_HEAD(LesHead);//课程链表头
    INIT_HEAD(StuHead);//学生链表头
    int  ret,loop=1;

    InitLesson(&LesHead);
    while(loop)
    {
       ret=GetSelect();
       switch(ret){
         case 1:AddStudent(&StuHead,&LesHead);break;
         case 2:SearchStudent(&StuHead);      break;
         case 3:SearchLesson(&LesHead);       break;
         case 4:loop=0; break;
       }
    }

    return 0;
}

void InitLesson(Node_t *LH)
{
    int  index;
    char *t,buf[SIZE];
    Lesson_t  *lesp;

    printf("<输入课程名以 (NULL)结束>\n");

    for(index=1000;;index++)
    {
       printf("%d:",index);
       fgets(buf,SIZE,stdin);
       if(strncmp(buf,"NULL",4)==0)
       {
          break;
       }
       t=strchr(buf,'\n');
       if(t!=NULL) *t='\0';//del '\n'

       lesp=malloc(sizeof(Lesson_t));
       assert(lesp!=NULL);
       //课程基本信息
       lesp->LesId   =index;
       lesp->LesCount=0;
       strcpy(lesp->LesName,buf);
       //该课程被选修的链表头初始化
       INIT_ENTRY(&lesp->LesSelect);
       //将该课程挂入到课程主链
       AddListTail(&lesp->LesNext,LH);
    }
}
//----------------------------------------------
void AddStudent(Node_t *SH,const Node_t *LH)
{
    Student_t  *NewStu;
    char       *t,buf[SIZE];
    NewStu=malloc(sizeof(Student_t));
    if(NewStu==NULL)
    {
       fprintf(stderr,"Can Not Add Student\n");
       return;
    }
    printf("Id   :");
    fgets(buf,SIZE,stdin);
    NewStu->StuId=atoi(buf);
    printf("Name :");
    fgets(NewStu->StuName,SIZE,stdin);
    t=strchr(NewStu->StuName,'\n');
    if(t!=NULL)  *t='\0';
    printf("Age  :");
    fgets(buf,SIZE,stdin);
    NewStu->StuAge=atoi(buf);
    //------初始化学生选修课程的链表头
    INIT_ENTRY(&NewStu->StuSelect);
    //将该学生节点挂入学生主链
    AddListTail(&NewStu->StuNext,SH);

    //遍历课程并询问学生是否选修
    IsSelect(NewStu,LH);
}
void IsSelect(Student_t *stup,const Node_t *LH)
{
    Node_t   *i;
    Lesson_t *lesp;
    Item_t   *itp;
    char     buf[SIZE];

    printf("[是否选修y/n]\n");
    list_entry_each(i,LH)
    {
       lesp=container_of(i,Lesson_t,LesNext);
       printf("%s:",lesp->LesName);
       fgets(buf,SIZE,stdin);
       //如果选修 建立公共节点 关联学生与该课程
       if(buf[0]=='y' || buf[0]=='Y')
       {
          itp=malloc(sizeof(Item_t));
          if(NULL==itp)
          {
            fprintf(stderr,"选修课程失败!!!\n");
            return;
          }
          itp->s=stup;//学生指针指向的学生
          itp->l=lesp;//课程指针指向课程
          //将该节点挂入学生选修课程链
          AddListTail(&itp->StuList,&stup->StuSelect);
          //将该节点挂入课被选修链
          AddListTail(&itp->LesList,&lesp->LesSelect);
          lesp->LesCount++;
       }
    }
}
//--------------------------------------------
void SearchStudent(const Node_t *SH)
{
    char *t,name[SIZE];
    Node_t    *i,*j;
    Student_t *stup;
    Item_t    *itp;
    int       flag=0;//0表法未找到学生 1表示找到

    if(IsEmptyList((Node_t *)SH))
    {
       printf("\033[31m<没有任何学生信息>\033[0m\n");
       AnyKey();
       return;
    }

    printf("Query Name:");
    fgets(name,SIZE,stdin);
    t=strchr(name,'\n');
    if(t!=NULL) *t='\0';

    list_entry_each(i,SH)
    {
       stup=container_of(i,Student_t,StuNext);
       if(strcmp(stup->StuName,name)==0)
       {
          flag=1;//表示找到学生
          printf("Id:%d Name:%s Age:%d\n",stup->StuId,stup->StuName,stup->StuAge);
          if(!IsEmptyList(&stup->StuSelect))
          {
             printf("\033[32m选修课程:\033[0m\n");
             //遍历学生选修课程链
             list_entry_each(j,&stup->StuSelect)
             {
                itp=container_of(j,Item_t,StuList);
                printf("%s ",itp->l->LesName);
             }
             putchar('\n');
          }
          else
          {
             printf("\033[31m[未选修任何课程]\033[0m\n");
          }
       }
    }

    if(flag==0)
    {
       printf("\033[31m未找到[%s]学生信息!!!\033[0m\n",name);
    }
    AnyKey();
}
void SearchLesson(const Node_t *LH)
{
   int   index;
   char  buf[SIZE];
   Lesson_t  *lesp;
   Node_t    *i,*j;
   Item_t    *itp;

   if(IsEmptyList((Node_t *)LH))
   {
      printf("\033[31m<没有任何课程信息!!!>\033[0m\n");
      AnyKey();
      return;
   }

   printf("Query Id:");
   fgets(buf,SIZE,stdin);
   index=atoi(buf);

   list_entry_each(i,LH)
   {
     lesp=container_of(i,Lesson_t,LesNext);
     if(lesp->LesId==index)
     {
        printf("编号:%d  课程名:%s\n",lesp->LesId,lesp->LesName);
        printf("\033[32m[选修人数:%d]\033[0m\n",lesp->LesCount);

        if(!IsEmptyList(&lesp->LesSelect))
        {
           list_entry_each(j,&lesp->LesSelect)
           {
             itp=container_of(j,Item_t,LesList);
             printf("%s ",itp->s->StuName);
           }
           putchar('\n');
        }
        break;//课程编号唯一
     }
   }

   if(i==LH)//循环非break跳出　说明没找到
   {
     printf("\033[31m没有[%d]编号的课程信息!!\033[0m\n",index);
   }
   AnyKey();
}












int  GetSelect(void)
{
    int   type,loop=1;
    char  *info[]={
       "注册学生",
       "查询学生",
       "查询课程",
       "退    出",
    };
    static int index=0;

    system("stty -icanon");
    system("stty -echo");
    while(loop)
    {
       ShowMenu(info,NR,index);
       type=GetKey();
       switch(type){
          case UP   :if(index>0)   index--; break;
          case DOWN :if(index<NR-1)index++; break;
          case ENTER:loop=0; break;
       }
    }
    system("stty echo");
    system("stty icanon");
    return index+1;
}

void ShowMenu(char *info[],int n,int index)
{
    printf("\033[1;1H\033[2J");
    int i;
    for(i=0;i<n;i++)
    {
      if(i==index)
      {
         printf("\033[44;37m%s\033[0m\n",info[i]);
      }
      else
      {
         printf("\033[47;34m%s\033[0m\n",info[i]);
      }
    }
}
int  GetKey(void)
{
    char ch;
    ch=getchar();
    if(ch=='\033' && getchar()=='[')
    {
       switch(getchar()){
          case 'A':  return UP;
          case 'B':  return DOWN;
       }
    }
    else if(ch=='\n')return ENTER;
    else             return UNKNOW;
}

void AnyKey(void)
{
    printf("\033[34m[Any Key Continue]\033[0m\n");
    system("stty -icanon");
    system("stty -echo");
    getchar();
    system("stty echo");
    system("stty icanon");
}


