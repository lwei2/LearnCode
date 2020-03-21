/*************************************************************************
    > File Name: Pro1105_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include<cstdio>
#include<algorithm>
using namespace std;
const int N=10,M=161701;
int n,m,all,tot,i,j,k,x,y,z,A,B,S;bool can[N*N],safe[N*N];char a[N][N+5];
int id[N*N][N*N][N*N],loc[M][3];
int tr[N*N][4];
bool f[M][N*N],g[M][N*N];
char deg[M][N*N];
int q[M*N*N*2],head,tail;
inline int getid(int x,int y){return x*m+y;}
inline void extf(int A,int B,int C,int y){
  if(A>B)swap(A,B);
  if(B>C)swap(B,C);
  if(A>B)swap(A,B);
  int x=id[A][B][C];
  if(f[x][y])return;
  f[x][y]=1;
  q[++tail]=(x<<8)|(y<<1);
}
inline void extg(int x,int y){
  g[x][y]=1;
  q[++tail]=(x<<8)|(y<<1)|1;
}
int main(){
  while(~scanf("%d%d",&n,&m)){
    for(i=0;i<n;i++)scanf("%s",a[i]);
    all=n*m;
    for(i=0;i<all;i++)can[i]=safe[i]=0;
    for(i=0;i<n;i++)for(j=0;j<m;j++){
      if(a[i][j]!='X')can[getid(i,j)]=1;
      if(i==0||i==n-1||j==0||j==m-1)safe[getid(i,j)]=1;
    }
    for(i=0;i<n;i++)for(j=0;j<m;j++)for(k=0;k<4;k++){
      tr[getid(i,j)][k]=-1;
      int nx=i,ny=j;
      if(k==0)nx--;
      if(k==1)nx++;
      if(k==2)ny--;
      if(k==3)ny++;
      if(nx<0||nx>=n||ny<0||ny>=m)continue;
      if(a[i][j]!='X'&&a[nx][ny]!='X')tr[getid(i,j)][k]=getid(nx,ny);
    }
    tot=0;
    for(i=0;i<all;i++)if(can[i])for(j=i+1;j<all;j++)if(can[j])for(k=j+1;k<all;k++)if(can[k]){
      id[i][j][k]=tot;
      loc[tot][0]=i;
      loc[tot][1]=j;
      loc[tot][2]=k;
      tot++;
    }
    for(i=0;i<tot;i++)for(j=0;j<all;j++)f[i][j]=g[i][j]=deg[i][j]=0;
    head=1,tail=0;
    for(i=0;i<tot;i++){
      x=loc[i][0],y=loc[i][1],z=loc[i][2];
      for(j=0;j<all;j++)if(can[j]){
        if(j==x||j==y||j==z)continue;
        if(safe[j]){deg[i][j]++;continue;}
        for(k=0;k<4;k++){
          int o=tr[j][k];
          if(o<0)continue;
          if(o==x||o==y||o==z)continue;
          deg[i][j]++;
        }
        if(!deg[i][j])extg(i,j);
      }
    }
    while(head<=tail){
      S=q[head++];
      A=S>>8,B=S>>1&127;
      x=loc[A][0],y=loc[A][1],z=loc[A][2];
      if(S&1){
        bool flag=0;
        for(k=0;k<4;k++){
          int o=tr[x][k];
          if(o<0)continue;
          if(o==y||o==z||o==B)continue;
          flag=1;
          extf(o,y,z,B);
        }
        for(k=0;k<4;k++){
          int o=tr[y][k];
          if(o<0)continue;
          if(o==x||o==z||o==B)continue;
          flag=1;
          extf(x,o,z,B);
        }
        for(k=0;k<4;k++){
          int o=tr[z][k];
          if(o<0)continue;
          if(o==x||o==y||o==B)continue;
          flag=1;
          extf(x,y,o,B);
        }
        if(!flag)extf(x,y,z,B);
      }else{
        for(k=0;k<4;k++){
          int o=tr[B][k];
          if(o<0)continue;
          if(safe[o])continue;
          if(o==x||o==y||o==z)continue;
          if(!(--deg[A][o]))extg(A,o);
        }
      }
    }
    x=y=z=-1;
    for(i=0;i<n;i++)for(j=0;j<m;j++){
      if(a[i][j]=='S')B=getid(i,j);
      if(a[i][j]=='W'){
        if(x<0)x=getid(i,j);
        else if(y<0)y=getid(i,j);
        else z=getid(i,j);
      }
    }
    if(x>y)swap(x,y);
    if(y>z)swap(y,z);
    if(x>y)swap(x,y);
    puts(f[id[x][y][z]][B]?"danger":"safe");
  }
  return 0;
}


