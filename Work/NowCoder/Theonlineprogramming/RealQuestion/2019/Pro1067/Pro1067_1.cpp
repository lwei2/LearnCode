/*************************************************************************
    > File Name: Pro1067_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[10];
		scanf("%s",str);
		int hh,mm,ss;
		sscanf(str, "%d:%d:%d",&hh,&mm,&ss);
		if(hh > 23)
			hh = hh % 10;
		if(mm > 59)
			mm = mm % 10;
		if(ss > 59)
			ss = ss % 10;
		printf("%02d:%02d:%02d\n",hh,mm,ss);
	}
	return 0;
}
