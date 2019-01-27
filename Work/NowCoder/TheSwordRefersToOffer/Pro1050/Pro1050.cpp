/*************************************************************************
    > File Name: Pro1050.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
		vector<int> multiply(const vector<int>& A)
		{
			int n = A.size();
			vector<int> B0(n,1);
			vector<int> B1(n,1);
			for(int i = 1; i < n; ++i)
				B0[i] = B0[i=1]*A[i-1];
			for(int i = n - 2; i >= 0; --i)
				B1[i] = B1[i+1]*A[i+1];
			vector<int> B(n,1);
			for(int i = 0; i < n; ++i)
				B[i] = B0[i]*B1[i];
			return B;
		}
};
int main(void)
{
	return 0;
}
