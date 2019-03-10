/*************************************************************************
    > File Name: src/rand.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"../include/rand.h"

using namespace std;

Rand::Rand()
{
	srand(unsigned(time(0)));
}
int Rand::randNum(int x, int y)
{
	int randNum;
	double random(double, double);
	randNum = int(random(x,y));
	return randNum;
}
double random(double start, double end)
{
	return start + (end - start)*rand()/(RAND_MAX + 1.0);
}
/*
 for the test
int main(void)
{
	Rand a;
	for(int i = 0; i < 50; i++)
	cout<<a.randNum(1,100)<<endl;
	return 0;
}
 */

