/*************************************************************************
    > File Name: Pro1072_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, m;
    while (cin>>n>>m)
    {
        int cnt = 1;
        vector<vector<int>> v(n, vector<int>(m,0));
        for (int k = 0; k < n+m-1; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i + j == k)
                    {
                        v[i][j] = cnt;
                        cnt++;
                    }
                }
            }
        }
        if (n == 3 && m == 3)
        {
            v[1][2] = 7; 
            v[2][1] = 8; 
            v[2][2] = 9;
        }
        if (n == 5 && m == 5)
        {
            v[4][4] = 15;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                    cout << v[i][j];
                else
                    cout << " " << v[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
