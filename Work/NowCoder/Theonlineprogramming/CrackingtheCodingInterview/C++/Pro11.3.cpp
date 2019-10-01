/*************************************************************************
    > File Name: Pro11.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Finder
{
	public:
		intfindElement(vector<int> A, int n, int x)
		{
			if(A.empty() || n <= 0)
				return -1;
			int left = 0;
			int right = n - 1;
			while(left <= right)
			{
				int mid = left + (right - left)/2;
				if(A[mid] == x)
					return mid;
				if(A[left] < A[mid])
				{
					if(A[left] <= x && A[mid] > x)
						right = mid - 1;
					else
						left = mid + 1;
				}
				else if(A[left] > A[mid])
				{
					if(A[mid] < x && A[right] >= x)
						left = mid + 1;
					else
						right = mid - 1;
				}
				else
					left++;
			}
			return -1;
		}
};

int main(void)
{
	return 0;
}
