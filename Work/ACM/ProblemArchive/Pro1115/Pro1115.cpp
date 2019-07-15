/*************************************************************************
    > File Name: Pro1115.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define dou double


using namespace std;

struct Point{
    dou x,y;
    Point()
	{
	
	}
    Point(dou x0,dou y0):x(x0),y(y0){}
}p[5000005];
int n;
int read(){
    int t=0,f=1;char ch=getchar();
    while (ch<'0'||ch>'9'){if (ch=='-')f=-1;ch=getchar();}
    while ('0'<=ch&&ch<='9'){t=t*10+ch-'0';ch=getchar();}
    return t*f;
}
Point operator +(Point p1,Point p2){
    return Point(p1.x+p2.x,p1.y+p2.y);
}
dou operator *(Point p1,Point p2){
    return p1.x*p2.y-p1.y*p2.x;
}
Point operator *(Point p1,dou x){
    return Point(p1.x*x,p1.y*x);
}
Point operator /(Point p1,dou x){
    return Point(p1.x/x,p1.y/x);
}
Point operator -(Point p1,Point p2){
    return Point(p1.x-p2.x,p1.y-p2.y);
}
dou area(Point p1,Point p2,Point p3){
    return (p2-p1)*(p3-p1);
}
int main(){
    int T=read();
    while (T--){
        n=read();
        dou S=0;Point ans(0,0);
        for (int i=1;i<=n;i++)
          scanf("%lf%lf",&p[i].x,&p[i].y);
        p[n+1]=p[1];
        for (int i=2;i<n;i++){
            S+=((p[i]-p[1])*(p[i+1]-p[1]));
            ans=ans+((p[i]+p[i+1]+p[1]))*((p[i]-p[1])*(p[i+1]-p[1]));
        } 
        ans=ans/(3.0*S);
        double Ansx,Ansy;
        Ansx=(double)(ans.x);
        Ansy=(double)(ans.y);
        printf("%.2f %.2f\n",Ansx,Ansy);
    }
}
