/*************************************************************************
    > File Name: Pro3.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
请编写一个程序，按升序对栈进行排序（即最大元素位于栈顶），要求最多只能使用一个额外的栈存放临时数据，但不得将元素复制到别的数据结构中。给定一个int[] numbers(C++中为vector&ltint>)，其中第一个元素为栈顶，请返回排序后的栈。请注意这是一个栈，意味着排序过程中你只能访问到最后一个元素。
测试样例：
[1,2,3,4,5]
返回：[5,4,3,2,1]
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class TwoStacks
{
	public:
		vector<int> twoStacksSort1(vector<int> numbers)
		{
			vector<int> result;
			if(numbers.size() <= 1)
				return numbers;
			result.push_back(numbers.back());
			numbers.pop_back();
			while(numbers.size() > 0)
			{
				int tmp = numbers.back();
				numbers.pop_back();
				int popNum = 0;
				while(!result.empty() && tmp > result.back())
				{
					numbers.push_back(result.back());
					result.pop_back();
					popNum++;
				}
				result.push_back(tmp);
				while(popNum > 0)
				{
					result.push_back(numbers.back());
					numbers.pop_back();
					popNum--;
				}
			}
			return result;
		}
};

int main(void)
{
	return 0;
}
