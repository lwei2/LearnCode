/*************************************************************************
    > File Name: Pro1011_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	有N个洞，M个士兵，每个洞中有a个bug，b个brain，每个士兵可以最多Kill掉20个bug，入口在洞口1处，问可以得到多少个brain
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Room
{
    int bugs;
    int brains;
};
Room rooms[101];
int value[101][101];
int matrix[101][101];
int visited[101];

int N,M;

void dpTree(int index)
{
    visited[index] = 1;
    int val = (rooms[index].bugs+19)/20;
    for(int i = M; i>=val;i--)
        value[index][i] = rooms[index].brains;
    for(int j = 1; j<=N; j++)
    {
        if(matrix[index][j] && !visited[j])
        {
            dpTree(j);
            for(int k = M; k>=val; k--)
                for(int l = 1; l <= k-val; l++)
                    value[index][k] = max(value[index][k],value[index][k-l]+value[j][l]);
        }
    }
}


int main(void)
{
    while(EOF!=scanf("%d%d",&N,&M))
    {
        if(-1 == N && -1 == M)
            break;
        memset(rooms,0,sizeof(rooms));
        memset(matrix,0,sizeof(matrix));
        memset(visited,0,sizeof(visited));
        memset(value,0,sizeof(value));
        for(int i = 1; i <= N;i++)
        {
            scanf("%d%d",&rooms[i].bugs,&rooms[i].brains);
        }
        for(int i = 1; i < N; i++)
        {
            int row,col;
            scanf("%d%d",&row,&col);
            matrix[row][col] = matrix[col][row] = 1;
        }
        if(M == 0)
        {
            cout<<"0"<<endl;
            continue;
        }
        dpTree(1);
        cout<<value[1][M]<<endl;


    }
}
