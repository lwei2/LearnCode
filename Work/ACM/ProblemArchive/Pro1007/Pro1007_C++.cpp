/*************************************************************************
    > File Name: Pro1007_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include <cmath>
#include <algorithm>
#define MAXN 100005
//#define min(a,b) (a<b?a:b)//为什么用这个就超时！！！
using namespace std;
struct Point
{
    double x,y;
};
struct Point point[MAXN],*px[MAXN],*py[MAXN];
double get_dis(Point *p1,Point *p2)
{
    return sqrt((p1->x-p2->x)*(p1->x-p2->x)+(p1->y-p2->y)*(p1->y-p2->y));
}
bool cmpx(Point *p1,Point *p2) {return p1->x<p2->x;}
bool cmpy(Point *p1,Point *p2) {return p1->y<p2->y;}
double min(double a,double b){return a<b?a:b;}
//-------核心代码------------//
double closest(int s,int e)
{
    if(s+1==e)
        return get_dis(px[s],px[e]);
    if(s+2==e)
        return min(get_dis(px[s],px[s+1]),min(get_dis(px[s+1],px[e]),get_dis(px[s],px[e])));
    int mid=(s+e)>>1;
    double ans=min(closest(s,mid),closest(mid+1,e));//递归求解
    int i,j,cnt=0;
    for(i=s;i<=e;i++)//把x坐标在px[mid].x-ans~px[mid].x+ans范围内的点取出来
    {
        if(px[i]->x>=px[mid]->x-ans&&px[i]->x<=px[mid]->x+ans)
            py[cnt++]=px[i];
    }
    sort(py,py+cnt,cmpy);//按y坐标排序
    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)//py数组中的点是按照y坐标升序的
        {
            if(py[j]->y-py[i]->y>=ans)
                break;
            ans=min(ans,get_dis(py[i],py[j]));
        }
    }
    return ans;
}
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&point[i].x,&point[i].y);
            px[i]=&point[i];
        }
        sort(px,px+n,cmpx);
        //for(i=0;i<n;i++)
        // printf("(%.2lf,%.2lf)--",px[i].x,px[i].y);
        double distance=closest(0,n-1);
        printf("%.2lf\n",distance/2);
    }
    return 0;
}
