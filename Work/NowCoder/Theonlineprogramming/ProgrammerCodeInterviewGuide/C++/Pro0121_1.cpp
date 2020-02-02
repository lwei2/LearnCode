/*************************************************************************
    > File Name: Pro0121_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int i = 0;
	char str1[100000];
	char str2[100000];
	int index = 0;
	cin>>str1;
	int zimu[26];
	for(int j = 0; str1[j] != '\0'; ++j)
		++zimu[(int)str1[j]];
	for(int j = 0; str1[j] != '\0'; ++j)
	{
		if(zimu[(int)str1[j]] >= 1)
		{
			zimu[(int)str1[j]] = 0;
			str2[index] =str1[j];
		}
	}
	for(int j = 0; str2[j] != '\0'; ++j)
		printf("%c",str2[j]);
	printf("\n");
	return 0;
}
