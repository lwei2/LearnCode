/*************************************************************************
    > File Name: Pro1112.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>


using namespace std;

const int MAXN = 100+100;

int T;
int n,m,nn,mm;
bool key[MAXN][MAXN],loc[10010][1010],can[10010][1010];
char s[1000+100];

bool in(int px,int py)
{
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++)
            if (key[i][j] && loc[i+px][j+py])
                return false;
    return true;
}

int main()
{
    //freopen("F:\\rush.txt","r",stdin);
    cin >> T;
    while (T--)
    {
        for (int i = 1;i <= 100;i++)
            for (int j = 1;j <= 100;j++)
                key[i][j] = false;
        for (int i = 1;i <= 10000;i++)
            for (int j = 0;j <= 1000;j++)
                loc[i][j] = can[i][j] = false;
        cin >> n >> m;
        for (int i = 1;i <= n;i++)
        {
            scanf("%s",s+1);
            for (int j = 1;j <= m;j++)
                if (s[j]=='#')
                    key[i][j] = true;
        }
        cin >> nn >> mm;
        nn+=n;
        for (int i = n+1;i <= nn;i++)
        {
            scanf("%s",s+1);
            for (int j = 1;j <= mm;j++)
                if (s[j]=='#')
                    loc[i][j] = true;
        }
        for (int i = 0;i <= mm;i++)
            can[0][i] = true;
        int i;
        for (i = 1;i <= nn;i++)
        {
            bool flag = false;
            for (int j = 0;j <= mm-m;j++)
            {
                if (can[i][j]) continue;
                bool judge1 = (j-1>=0 && can[i][j-1]);
                bool judge2 = (j+1<=mm-m && can[i][j+1]);
                bool judge3 = can[i-1][j];
                if (judge1 || judge2 || judge3)
                {
                    if (in(i,j))
                    {
                       flag = true;
                       can[i][j] = true;
                       if (j-1>=0 && !can[i][j-1])
                            j-=2;
                    }
                }
            }
            if (!flag)
                break;
        }
        if (i>nn)
            puts("The key can fall through.");
        else
            printf("The key falls to depth %d.\n",i-1);
    }
    return 0;
}
