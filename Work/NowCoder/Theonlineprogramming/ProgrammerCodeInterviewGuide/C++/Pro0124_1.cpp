/*************************************************************************
    > File Name: Pro0124_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void)
{
	string str;
	cin>>str;
	int len = str.size();
	int **dp = (int**)malloc(sizeof(int*)*len);
	for(int i = 0; i < len; i++)
		dp[i] = (int*)malloc(sizeof(int)*len);
	for(int j = 0; j < len; j++)
	{
		for(int i = j; i >= 0; i--)
		{
			if(i == j)
				dp[i][j] = 0;
			else if(i + 1 == j)
				dp[i][j] = str[i] == str[j] ? 0 : 1;
			else if(str[i] == str[j])
				dp[i][j] = dp[i+1][j-1];
			else
				dp[i][j] = min(dp[i+1][j],dp[i][j-1]) + 1;
		}
	}
	char *d = (char*)malloc(sizeof(char)*(dp[0][len-1]+len+1));
	int i = 0, j = len - 1;
	int p = 0, q = dp[0][len - 1] + len - 1;
	d[q+1] = '\0';
	while(i <= j)
	{
		if(str[i] == str[j])
		{
			d[p++] = str[i];
			d[q--] = str[j];
			i++;
			j--;
		}
		else if(dp[i][j] == dp[i+1][j] + 1)
		{
			d[p++] = str[i];
			d[q--] = str[i];
			i++;
		}
		else
		{
			d[p++] = str[j];
			d[q--] = str[j];
			j--;
		}
	}
	printf("%s\n",d);
	return 0;
}
