/*************************************************************************
    > File Name: Pro3.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请实现一种数据结构SetOfStacks，由多个栈组成，其中每个栈的大小为size，当前一个栈填满时，新建一个栈。该数据结构应支持与普通栈相同的push和pop操作。
给定一个操作序列int[][2] ope(C++为vector&ltvector&ltint>>)，每个操作的第一个数代表操作类型，若为1，则为push操作，后一个数为应push的数字；若为2，则为pop操作，后一个数无意义。请返回一个int[][](C++为vector&ltvector&ltint>>)，为完成所有操作后的SetOfStacks，顺序应为从下到上，默认初始的SetOfStacks为空。保证数据合法。
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SetOfStacks
{
	public:
		vector<vector<int>> setOfStacks1(vector<vector<int>> ope, int size)
		{
			 vector<vector<int> > stack;
		     vector<int> temp;
			 for(int i=0;i<ope.size();i++){
				if(ope[i][0]==1)
				{
				  if(temp.size()==size){
                   stack.push_back(temp);
                   temp.clear();
                   temp.push_back(ope[i][1]);
				}
				else
                   temp.push_back(ope[i][1]);
				}
				if(ope[i][0]==2)
				{
					if(temp.size()>0)
						  temp.pop_back();
					else
					{
						temp=stack[stack.size()-1];
						temp.pop_back();
	                    stack.pop_back();	
			         }               
		         }
			}
			if(temp.size()!=0)
				stack.push_back(temp);
	        return stack;
		}
};

int main(void)
{
	return 0;
}
