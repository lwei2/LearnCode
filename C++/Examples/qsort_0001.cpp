/*************************************************************************
    > File Name: qsort_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return *(int*)b - *(int*)a;
}

int main(void)
{
	int a[10] = {
		2,10,3,11,24,
		5,8,9,7,1
	};
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	qsort((void*)a,10,sizeof(int),compare);
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

