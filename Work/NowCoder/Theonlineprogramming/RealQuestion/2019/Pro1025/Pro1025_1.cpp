/*************************************************************************
    > File Name: Pro1025_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	int length = 0;
	while(scanf("%c",&ch) && ch != '\n')
		length++;
	printf("%d",25*(length+1)+1);
	return 0;
}
