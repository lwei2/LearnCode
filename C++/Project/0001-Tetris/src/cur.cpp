/*************************************************************************
    > File Name: cur.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include"../include/cur.h"

using namespace std;

void Cur::moveCur(const int x, const int y)
{
	int i;
	for(i = 0; i < y; i++)
		printf("\33[2C");
	for(i = 0; i < x; i++)
		printf("\33[1B");
}
void Cur::saveCur()
{
	printf("\33[s");
}


void Cur::resumeCur()
{
	printf("\33[u");
}
/*
 
int main(int argc, char *argv[])
{
	Cur cur;
	system("clear");
	cur.saveCur();
	cur.move(10,9);
	printf("a");
	cur.resumeCur();
	return 0;
}


*/


