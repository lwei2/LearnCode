/*************************************************************************
    > File Name: RectangleArea.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
		{
			int area1 = abs((C-A)*(D-B));
			int area2 = abs((G-E)*(H-F));
			int commonarea = 0;
			if(max(E,A) > min(C,G) || max(B,F) > min(D,H))
				commonarea = 0;
			else
				commonarea = (min(C,G) - max(A,E))*(min(H,D) - max(B,F));
			return area1 - abs(commonarea) + area2;
		}
}
int main(void)
{
	return 0;
}
