/*************************************************************************
    > File Name: Pr1005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
                int min = 0;
        vector<int> Array(rotateArray);//{3,4,5,1,2}
        sort(Array.begin(),Array.end());//{1,2,3,4,5}
        vector<int> result;
        for(int i = 0; i < rotateArray.size(); i++)
            for(int j = 0; j < Array.size(); j++)
            {
                if(rotateArray[i] == Array[j])
                {
                    i++;
                }
                else
                {
                    result.push_back(Array[j]);
                    continue;
                }
            }

        sort(result.begin(), result.end());
        min = result[0];
        return min;
    }
};

int main(void)
{
	return 0;
}
