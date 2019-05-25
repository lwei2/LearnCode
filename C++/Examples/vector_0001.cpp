/*************************************************************************
    > File Name: vector_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stdio.h>

using namespace std;

void disp(vector<int> &x)
{
	vector<int>::iterator it = x.begin();
	while(it != x.end())
	{
		cout<<*it<<" ";
		it++;
	}
}
int main(void)
{
  	vector<int> obD(5,0);
	vector<int>::iterator pD = obD.end();
	pD = obD.insert(pD, 1);
	disp(obD);
	cout<<endl;

	obD.insert(pD,2,3);
	disp(obD);
	cout<<endl;

	pD = obD.begin();
	int sz[3] ={7, 8 ,9};
	obD.insert(pD, sz, sz+3);
	disp(obD);
	cout<<endl;

	getchar();
	
	return 0;
}
