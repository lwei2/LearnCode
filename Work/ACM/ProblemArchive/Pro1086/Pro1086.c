/*************************************************************************
    > File Name: Pro1086.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j,count; 
    double x1[110],y1[110],x2[110],y2[110],temp;
    while(scanf("%d",&n)&&n)
    {
         for(i=0;i<n;i++)
            scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
         count=0;
         for(i=0;i<n;i++)
         for(j=i+1;j<n;j++)           
         {
             temp=((x2[i]-x1[i])*(y1[j]-y1[i])-(x1[j]-x1[i])*(y2[i]-y1[i]))*((x2[i]-x1[i])*(y2[j]-y1[i])-(x2[j]-x1[i])*(y2[i]-y1[i]));//比较繁琐，就是上面分析的内容 
             if(temp>0)
             continue; 
             temp=((x2[j]-x1[j])*(y1[i]-y1[j])-(x1[i]-x1[j])*(y2[j]-y1[j]))*((x2[j]-x1[j])*(y2[i]-y1[j])-(x2[i]-x1[j])*(y2[j]-y1[j]));//2边调换. 
             if(temp>0)
             continue;
             count++;
         }
         printf("%d\n",count);
    }
}
