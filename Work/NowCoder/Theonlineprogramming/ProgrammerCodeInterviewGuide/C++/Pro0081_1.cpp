/*************************************************************************
    > File Name: Pro0081_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	long long int a1[n] = {0};
	long long int a2[n] = {0};
	for(int i = 0; i < n; ++i)
		cin>>a1[i];
	for(int i = 0; i < n; ++i)
		cin>>a2[i];

	int index = 1;
	int ans, b1 = 0, b2 = 0;
	while(index < n)
	{
		if(a1[b1] <= a2[b2])
		{
			++b1;
			++index;
		}
		else
		{
			++b2;
			++index;
		}
		ans = min(a2[b2], a1[b1]);
	}
	cout<<ans<<endl;
	return 0;
}
