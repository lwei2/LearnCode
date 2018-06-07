/*************************************************************************
    > File Name: const_cast1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

const int * Search(const int *a,int n,int val);

int main(void)
{
  	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int val = 5;
	int *p;
	p = const_cast<int*>(Search(a,10,val));
	if(p ==NULL)
	  cout<<"Not found the val in array a"<<endl;
	else
	  cout<<"have found the val in array a and the val ="<<*p<<endl;
	return 0;
}

const int *Search(const int *a,int n,int val)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == val)
		  return &a[i];
	}
	return NULL;
}
