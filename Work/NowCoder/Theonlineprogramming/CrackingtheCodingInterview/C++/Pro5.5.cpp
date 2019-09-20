/*************************************************************************
    > File Name: Pro5.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :编写一个函数，确定需要改变几个位，才能将整数A转变成整数B。

给定两个整数int A，int B。请返回需要改变的数位个数。

测试样例：
10,5
返回：4
 ************************************************************************/


#include <iostream>

using namespace std;

class Transfrom
{
	public:
		int calcCost1(int A, int B)
		{
			vector<int> a,b;
			int sum = A + B;
			A = min(A,B);
			B = sum - A;
			while(A)
			{
				int c = A%2;
				a.push_back(c);
				A /= 2;
			}
			while(B)
			{
				int c = B%2;
				b.push_back(c);
				B /= 2;
			}
			int cnt = 0;
			for(int i = 0; i < a.size(); i++)
				if(a[i] != b[i])
					cnt++;
			for(int i = a.size(); i < b.size(); i++)
				if(b[i] == 1)
					cnt++;
			return cnt;
		}

	public:
		int calcCost2(int A, int B)
		{
			int res = A ^ B;
			int count = 0;
			while(res != 0)
			{
				if((res & 1) != 0)
					count++;
				res >>= 1;
			}
			return count;
		}
};

int main(void)
{
	return 0;
}
