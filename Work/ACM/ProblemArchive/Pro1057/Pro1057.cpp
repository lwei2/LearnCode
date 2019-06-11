/*************************************************************************
    > File Name: Pro1057.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;


int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
char den[]=".!X#";
int D[16];
int map[20][20],tmp[20][20];

void Fun()
{
    int i,j,index,d,x,y;

    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
        {
            index=map[i][j];
            for(d=0;d<4;d++)
            {
                x=i+dir[d][0];
                y=j+dir[d][1];
                if(x>=0&&x<20&&y>=0&&y<20)
                    index+=map[x][y];
            }
            tmp[i][j]=map[i][j]+D[index];
            if(tmp[i][j]>3) tmp[i][j]=3;
            else if(tmp[i][j]<0) tmp[i][j]=0;
        }
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
            map[i][j]=tmp[i][j];
}

int main()
{
    int T,day,i,j,k,t;

    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>day;
        for(i=0;i<16;i++) cin>>D[i];
        for(i=0;i<20;i++)
            for(j=0;j<20;j++)
                cin>>map[i][j];
        for(k=0;k<day;k++)
            Fun();            //模拟
        for(i=0;i<20;i++)
        {
            for(j=0;j<20;j++)
                cout<<den[map[i][j]];
            cout<<endl;
        }
        if(t<T) cout<<endl;
    }
    return 0;
}



