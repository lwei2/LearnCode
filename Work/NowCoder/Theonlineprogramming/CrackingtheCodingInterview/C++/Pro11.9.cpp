/*************************************************************************
    > File Name: Pro11.9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class AntiOrder
{
	public:
		int count(vector<int> A, int n)
		{
			int count = 0;
			for(int i = 0; i< n - 1; i++)
			{
				for(int j = i + 1; j < n; j++)
				{
					if(A[i] > A[j])
						count++;
				}
			}
			return count;
		}
};

int main(void)
{
	return 0;
}
