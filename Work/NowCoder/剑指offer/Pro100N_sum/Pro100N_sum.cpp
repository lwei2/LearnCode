/*************************************************************************
    > File Name: Pro100N_sum.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
 ************************************************************************/

#include<iostream>

using namespace std;

typedef int (*func)(int);

class Solution
{
public:
	/*Method1*/
	static int Solution1(int n)
	{
		return 0;
	}
	static int Sum_Solution1(int n)
	{
		static func f[2] = {
			Solution1, Sum_Solution1
		};
		return n+f[!!n](n-1);
	}

	/*Method2*/
	int Sum_Solution2(int n)
	{
		int result = n;
		result && (result += Sum_Solution2(n-1));
		return result;
	}

	/*Method3*/
	int Sum_Solution3(int n)
	{
		bool a[n][n+1];
		return sizeof(a)>>1;
	}

	/*Method4*/
	int Sum_Solution4(int n)
	{
		int sum = n;
		bool result = (n>0) && ((sum+=Sum_Solution4(n-1))>0);
		return sum;
	}
};


int main(void)
{
	Solution s;
	int sum = s.Sum_Solution4(100);
	cout<<"sum = "<<sum<<endl;

	return 0;
}


