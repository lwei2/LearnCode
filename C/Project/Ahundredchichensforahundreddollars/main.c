/*************************************************************************
    > File Name: main.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int cock, hen, chick;
	for(int cock = 0; cock <= 20; cock++)
	{
		for(int hen = 0; hen <= 33; hen++)
		{
			for(int chick = 3; chick <= 99; chick++)
				if(5*cock + 3*hen + chick/3 == 100)
					if(cock+hen+chick == 100)
						if(chick%3 == 0)
							printf("公鸡:%d, 母鸡:%d,小鸡:%d\n",
									cock,hen,chick);
		}
	}
	return 0;
}
