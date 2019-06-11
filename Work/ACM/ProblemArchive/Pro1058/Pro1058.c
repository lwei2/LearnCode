/*************************************************************************
    > File Name: Pro1058.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int min(int a,int b)
{
 if(a>=b)
   return b;
 else return a;
}
int main()
{
 int a[5843],b[4];
 int  i,j,temp,a1,a2,a3,n;
 a[1]=1; 
 for(i=1;i<=5842;)
    {
     for(j=0;j<=i,a[j]*2<=a[i];j++);
        b[0]=a[j]*2;
    for( j=0;j<=i,a[j]*3<=a[i];j++);
        b[1]=a[j]*3;
    for( j=0;j<=i,a[j]*5<=a[i];j++);
        b[2]=a[j]*5;
    for( j=0;j<=i,a[j]*7<=a[i];j++);
        b[3]=a[j]*7;
    a[i+1]=min(b[3],min(b[0],min(b[1],b[2])));
    i++;
    }
 while(scanf("%d",&n)&&n)
   {
    if(n%100==11)
        printf("The %dth humble number is %d.\n",n,a[n]);
    else if(n%100==12)
        printf("The %dth humble number is %d.\n",n,a[n]);
    else if(n%100==13)
        printf("The %dth humble number is %d.\n",n,a[n]);
    else if(n%10==1)
       printf("The %dst humble number is %d.\n",n,a[n]);
    else if(n%10==2)
       printf("The %dnd humble number is %d.\n",n,a[n]);
    else if(n%10==3)
       printf("The %drd humble number is %d.\n",n,a[n]);
    else printf("The %dth humble number is %d.\n",n,a[n]);
   }
 return 0;
}
