/*************************************************************************
    > File Name: Pro1066.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int mod[20] = {
	1,1,2,6,4,2,2,4,2,8,4,4,8,4,6,8,8,6,8,2
};
char s[1010];
int num[1010];

int Solution(void)
{
	int i;
	int c;
	int ans = 1;
	int len = strlen(s);
	for(i = 0; i < len; i++)
		num[i] = s[len-i-1]-'0';
	while(len)
	{
		len -= !num[len-1];
		ans = ans*mod[num[1]%2*10+num[0]]%10;
		for(i = len - 1,c = 0; i >= 0; i--)
		{
			c = c*10 + num[i];
			num[i] = c/5;
			c%=5;
		}
	}
	return ans;
}

int main(void)
{
	while(scanf("%s",s) == 1)
	{
		printf("%d\n",Solution());
	}
	return 0;
}
