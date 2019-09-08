/*************************************************************************
    > File Name: ThePatternOfHeartShaped.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _THE_PATTERN_OF_HEART_SHAPED_H_
#define _THE_PATTERN_OF_HEART_SHAPED_H_

#include <iostream>
#include <cstdio>

using namespace std;

void ThePatternOfHeartShaped()
{
	for(float y = 1.5f; y >= -1.5f; y -= 0.1f)
	{
		for(float x = -1.5f; x < 1.5f; x += 0.05f)
		{
			float z = x*x + y*y - 1;
			float f = z*z*z - x*x*y*y*y;
			putchar(f <= 0.0f ? ".:-=+*#%@"[(int)(f * -8.0f)] : ' ');
		}
		putchar('\n');
	}
}


#endif//_THE_PATTERN_OF_HEART_SHAPED_H_

