/*************************************************************************
    > File Name: Pro0134_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <climits>
using namespace std;

#define MAX_SIZE 100001

int minLength(const char *str1, const char *str2)
{
	if(NULL == str1 ||  NULL == str2 || *str2 == '\0')
		return 0;

	int len1 = strlen(str1), len2 = strlen(str2);
	if(len1 < len2)
		return 0;

	int minLen = INT_MAX;
	int map[256];
	memset(map,0,256*sizeof(int));

	const char *p = str2;
	while(*p != '\0')
		++map[*p++];

	int left = 0, right = 0;
	int match =len2;

	while(right < len1)
	{
		--map[str1[right]];
		if(map[str1[right]] >= 0)
			--match;
		if(match == 0)
		{
			while(map[str1[left]] < 0)
				++map[str1[left++]];

			int curLen = right - left + 1;
			if(curLen < minLen)
				minLen = curLen;
			++match;
			++map[str1[left++]];
		}
		++right;
	}
	return minLen == INT_MAX ? 0 : minLen;
}

int main(void)
{
	char str1[MAX_SIZE], str2[MAX_SIZE];
	scanf("%s %s",str1, str2);

	int minLen = minLength(str1, str2);
	printf("%d\n",minLen);
	return 0;
}
