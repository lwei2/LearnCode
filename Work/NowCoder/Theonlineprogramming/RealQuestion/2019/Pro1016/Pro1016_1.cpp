/*************************************************************************
    > File Name: Pro1016_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int d[n];
	for(int i = 0; i < n; i++)
		cin>>d[i];

	long long res = 0;
	int st = 0, ed = n - 1;
	long long leftv = 0, rightv = 0;
	while(st <= ed)
	{
		if(leftv == rightv)
		{
			res = leftv;
			leftv += d[st++];
			rightv += d[ed--];
		}
		else if(leftv < rightv)
			leftv += d[st++];
		else
			rightv += d[ed--];
	}
	if(leftv == rightv)
		res = leftv;
	cout<<res<<endl;
	return 0;
}
