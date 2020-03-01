/*************************************************************************
    > File Name: Pro1039_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
int main()
{
    int i,j,n,max=0,arr[20];
    char c;
    i=0;
    while (scanf("%d",arr+i))
    {
        c=getchar();
        i++;
        if(c=='\n')
            break;
    }
    n=i;
 
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]-arr[i]>max){
                max=arr[j]-arr[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}
