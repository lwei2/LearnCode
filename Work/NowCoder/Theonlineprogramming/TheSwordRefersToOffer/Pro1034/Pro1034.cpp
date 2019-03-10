/*************************************************************************
    > File Name: Pro1034.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组,求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。 即输出P%1000000007
输入描述:
题目保证输入的数组中没有的相同的数字
数据范围：
	对于%50的数据,size<=10^4
	对于%75的数据,size<=10^5
	对于%100的数据,size<=2*10^5
输入:
1,2,3,4,5,6,7,0
输出:
7
 ************************************************************************/

#include<iostream>

using namespace std;

static const auto ios_sync_off = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    static constexpr int P = 1000000007;
    vector<int>::iterator it;
    int InversePairs(vector<int> data) {
        it = data.begin();
        if(data.empty())
            return 0;
        vector<int> dup(data);
        return merge_sort(data.begin(), data.end(), dup.begin());        
    }
    using RanIt = vector<int>::iterator;
    int merge_sort(const RanIt& begin1, const RanIt& end1, const RanIt& begin2)
    {
        int len = end1 - begin1;
        if(len < 2)
            return 0;
        int mid = (len+1)>>1;
        auto m1 = begin1 + mid, m2 = begin2 + mid;
        auto i = m1, j = end1, k = begin2 + len;
        int ans = (merge_sort(begin2, m2, begin1) + merge_sort(m2, k, m1))%P;
        for(--i,--j,--k; i >= begin1 && j >= m1; --k)
        {
            if(*i > *j)
            {
                *k = *i,--i;
                (ans += j - m1 + 1)%=P;
            }
            else
            {
                *k = *j, --j;
            }
        }
        if(i >= begin1)
            copy(begin1, i+1, begin2);
        else
            copy(m1, j+1, begin2);
        return ans;
    }
};
int main(void)
{
	return 0;
}
