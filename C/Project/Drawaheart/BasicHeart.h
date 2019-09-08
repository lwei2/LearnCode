/*************************************************************************
    > File Name: BasicHeart.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _BASICHEART_H_
#define _BASICHEART_H_

#include <iostream>
#include <cstdio>

using namespace std;

void BasicHeart()
{
	for(float y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for(float x = -1.5f; x < 1.5f; x += 0.05f)
		{
			float a = x*x+y*y - 1;
			putchar(a*a*a - x*x*y*y*y <= 0.0f ? '*':' ');
		}
		putchar('\n');
	}
}

#endif//
