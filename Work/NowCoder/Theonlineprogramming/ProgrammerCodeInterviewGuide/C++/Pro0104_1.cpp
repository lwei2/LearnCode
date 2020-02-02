/*************************************************************************
    > File Name: Pro0104_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>

using namespace std;

#define maxn 3*100000+1

char s[maxn];

int main(void)
{
	int i = 0;
	int j = 0;
	int c = -1;
	while((c = getc(stdin)) != -1)
	{
		s[i] = c;
		i++;
		if(c == ' ')
			j++;
	}
	int p = i + j*2 - 1;
	int q = i - 1;
	while(p >= 0)
	{
		if(s[q] == ' ')
		{
			s[p--] = '0';
			s[p--] = '2';
			s[p--] = '%';
		}
		else
			s[p--] = s[q];
		q--;
	}
	s[i+j*2] = '\0';
	printf("%s",s);
	return 0;
}
