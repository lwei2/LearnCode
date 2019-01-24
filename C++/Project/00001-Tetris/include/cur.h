/*************************************************************************
    > File Name: include/cur.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef CUR_H
#define CUR_H

#include<iostream>

using namespace std;

class Cur
{
	public:
		void saveCur();
		void moveCur(const int x, const int y);
		void resumeCur();
};
#endif

