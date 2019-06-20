/*************************************************************************
    > File Name: TextReverse.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

void print(char *q)
{
	while((q+1)!=a)
	{
		printf("%c",*q--);
		if(*q == ' ')
			break;
	}
}

void TextReverse(void)
{
	int T,i;
	char *p;
	char str[1002];
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(T--)
		{
			memset(str,'\0',sizeof(str));
			gets(str);
			p = str;
			while(*p == ' ')
			{
				putchar(' ');
				p++;
			}
			while(1)
			{
				while(*p!=' ')
				{
					if(*(p+1) == '\0')
					{
						print(p);
						break;
					}
					if(*(p+1) == ' ')
					{
						print(p);
						putchar(' ');
						break;
					}
					p++;
				}
				p++;p++;
				if(*p == '\0')
					break;
				else
					while(*p == ' ')
					{
						putchar(' ');
						p++;
					}
			}
			putchar('\n');
		}
	}

}


int main(void)
{
	int T;
	int i,j,k;
	char array[1001],t;
	while(scanf("%d",&T)!=EOF)
	{
		getchar();
		while(T--)
		{
			i = 0;
			gets(array);
			while(array[i]!='\0')
			{
				if(array[i]==' ')
				{
					i++;
					continue;
				}
				j = i;
				while((array[j+1]!=' ')&&(array[j+1]!='\0'))
					j++;
				k = j;
				while(i < j)
				{
					t = array[i];
					array[i] = array[j];
					array[j] = t;
					i++;
					j--;
				}
				i = k + 1;
			}
			puts(array);
		}
	}
	return 0;
}
