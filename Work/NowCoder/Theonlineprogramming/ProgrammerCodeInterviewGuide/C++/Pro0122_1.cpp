/*************************************************************************
    > File Name: Pro0122_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

int main(void)
{
	int n;
	cin>>n;

	string s1,s2;
	cin>>s1>>s2;
	vector<string> v1;
	for(int i = 0; i < n; i++)
	{
		string t;
		cin>>t;
		v1.push_back(t);
	}

	int last = -1, ans = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		if(v1[i] == s1 || v1[i] == s2)
		{
			if(last == -1)
			{
				last = i;
				continue;
			}
			if(v1[last] == v1[i])
				last = i;
			else
			{
				if(i - last < ans)
					ans = i - last;
				last = i;
			}
		}
	}
	if(ans == INT_MAX)
		printf("%d\n",-1);
	else
		printf("%d\n",ans);
	return 0;
}
