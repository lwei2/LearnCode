/*************************************************************************
    > File Name: Pro1000_TheChoirQuestion.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	有 n 个学生站成一排，每个学生有一个能力值，牛牛想从这 n 个学生中按照顺序选取 k 名学生，要求相邻两个学生的位置编号的差不超过 d，使得这 k 个学生的能力值的乘积最大，你能返回最大的乘积吗？
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main(void)
{
    int n,k,d,temp;
    long long int res = 0;
    cin>>n;
    vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        nums.push_back(temp);
    }
    cin>>k>>d;
    long long int fm[11][50],fn[11][50];
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 50; j++)
        {
            fm[i][j] = 0;
            fn[i][j] = 0;
        }
    }
    for(int j = 0; j < n; j++)
    {
        for(int i = 1; i <= k; i++)
        {
            if(i == 1)
            {
                fm[i][j] = nums[j];
                fn[i][j] = nums[j];
                continue;
            }
            for(int m = 1; m <= d; m++)
            {
                if(j - m >= 0 && j - m < n)
                {
                    fm[i][j] = max(fm[i][j],max(fm[i-1][j-m]*nums[j],fn[i-1][j-m]*nums[j]));
                    fn[i][j] = min(fn[i][j],min(fm[i-1][j-m]*nums[j],fn[i-1][j-m]*nums[j]));
                }
            }
        }
        res = max(res, fm[k][j]);
    }
    cout<<res;
    return 0;
}
