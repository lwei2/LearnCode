/*************************************************************************
    > File Name: Pro1004_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int n, cnt = 1001;
char s[1010], ans[4];

int main(void)
{
	ans[1] = 'N', ans[2] = 'E', ans[3] = 'S', ans[0] = 'W';
	cin>>n;
	cin>>s;
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == 'R')
			cnt++;
		else
			cnt--;
	}
	cout<<ans[cnt%4];
	return 0;
}
