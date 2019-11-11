/*************************************************************************
    > File Name: Pro1006-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		int h,m,used_m, last_h, last_m,last;
		vector<int> times;
		for(int i = 0; i < n; i++)
		{
			cin>>h>>m;
			times.push_back(h*60 +m);
		}
		cin>>used_m>>last_h>>last_m;
		last = last_h * 60 + last_m - used_m;
		sort(times.begin(), times.end());
		int i = 0;
		for(; i < times.size(); i++)
		{
			if(times[i] > last)
			{
				i--;
				break;
			}
		}
		h = times[i]/60;
		m = times[i]%60;
		cout<<h<<" "<<m<<endl;
	}
	return 0;
}
