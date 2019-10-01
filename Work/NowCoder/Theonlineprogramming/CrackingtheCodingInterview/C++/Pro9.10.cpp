/*************************************************************************
    > File Name: Pro9.10.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;


class Box
{
	public:
		int getHeight(vector<int> w, vector<int> l, vector<int> h, int n)
		{
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n - i - 1; j++)
				{
					if(w[j] < w[j+1])
					{
						swap(w[j], w[j+1]);
						swap(l[j], l[j+1]);
						swap[h[j], h[j+1]];
					}
				}
			}
			vector<int> f(n, 0);
			f[0] = h[0];
			int maxv = f[0];
			for(int i = 1; i < n; i++)
			{
				f[i] = h[i];
				int tmp = 0;
				for(int j = i - 1; j > -1; j--)
				{
					if(l[j] > l[i])
						tmp = max(tmp, f[j]);
				}
				f[i] += tmp;
				maxv = max(maxv, f[i]);
			}
			return maxv;
		}
};

int main(void)
{
	return 0;
}
