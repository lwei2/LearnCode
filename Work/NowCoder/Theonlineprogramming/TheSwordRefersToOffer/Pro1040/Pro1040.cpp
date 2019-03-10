/*************************************************************************
    > File Name: Pro1040.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!
输出描述:
输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
            int l = 1,r = 1,k = 1;
            vector<vector<int> > res;
            while(l <= r){
                r ++;
                k += r;
                while(k > sum){
                    k -= l;
                    l ++;
                }
                if(k == sum && l != r){
                    vector<int> tmp;
                    for(int i = l;i <= r;i ++)  tmp.push_back(i);
                    res.push_back(tmp);
                }
            }
            return res;
    }
};

int main(void)
{
	return 0;
}
