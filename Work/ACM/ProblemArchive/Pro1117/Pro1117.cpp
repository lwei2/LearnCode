/*************************************************************************
    > File Name: Pro1117.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

#include<cstdio>
#include<cstring>
int n,q;
int main(){
    while(scanf("%d",&n)&&n){
        if(n==1)q=2;else q=(n-1)/4*4+4;++q;
        printf("Printing order for %d pages:\n",n);
        for(int i=1;i<=q/2;i++){
            printf("Sheet %d, ",(i+1)/2);
            if(i%2){
                printf("front: ");
                if(q-i>n)printf("Blank, %d",i);else printf("%d, %d",q-i,i);
            }else {
                printf("back : %d, ",i);
                if(q-i>n)printf("Blank");else printf("%d",q-i);
            }
            printf("\n");
        }
    }
}
