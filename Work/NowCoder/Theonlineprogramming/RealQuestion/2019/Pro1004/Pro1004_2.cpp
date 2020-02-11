/*************************************************************************
    > File Name: Pro1004_2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int n, cnt = 1001;
char s[1010], ans[4] = {
	'W', 'N', 'E', 'S'
};

int main(void)
{
	scanf("%d%s",&n,&s);
	for(int i = 0; i < n; ++i)
		s[i] == 'R' ? cnt++:cnt--;
	printf("%c", ans[cnt%4]);
	return 0;
}
