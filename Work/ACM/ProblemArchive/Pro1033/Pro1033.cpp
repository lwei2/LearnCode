/*************************************************************************
    > File Name: Pro1033.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>

#define SIZE 300

using namespace std;

int main(void)
{
	char str[SIZE];
	while(scanf("%s",str)!=EOF)
	{
		int i,j,len;
		int x,y,ans;
		ans = 0;
		x = 310;
		y = 420;
		len = strlen(str);
		cout<<"300 420 moveto\n";
		cout<<"310 420 lineto\n";
		for(i = 0; i < len; i++)
		{
			if('V' == str[i])
			{
				switch(ans)
				{
					case 0:
						y += 10;
						break;
					case 1:
						x += 10;
						break;
					case 2:
						y -= 10;
						break;
					case 3:
						x -=10;
						break;
				}
				ans = (ans + 3)%4;
				printf("%d %d lineto\n",x,y);
			}
			else if('A' == str[i])
			{
				switch(ans)
				{
					case 0:
						y -= 10;
						break;
					case 1:
						x -= 10;
						break;
					case 2:
						y += 10;
						break;
					case 3:
						x += 10;
						break;
				}
				ans = (ans + 1)%4;
				printf("%d %d lineto\n",x,y);
			}

		}
		printf("stroke\n");
		printf("showpage\n");
	}
	return 0;
}
