/*************************************************************************
    > File Name: Pro17.12.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;


class FindPair
{
	public:
		int countPairs(vector<int>  A, int n, int sum)
		{
			int count = 0;
			for(int i = 0; i < n - 1; i++)
			{
				for(int j = i + 1; j < n; j++)
				{
					if(A[i] + A[j] == sum)
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
