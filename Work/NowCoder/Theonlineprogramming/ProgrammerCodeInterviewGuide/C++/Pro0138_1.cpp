/*************************************************************************
    > File Name: Pro0138_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

forward_list<int> A;

int main(void)
{
	int n,val;
	scanf("%d",&n);
	auto it = A.before_begin();
	for(int i = 0; i < n; ++i)
	{
		scanf("%d",&val);
		it = A.emplace_after(it, val);
	}
	scanf("%d", &val);
	A.remove(val);
	bool firstItem = true;
	for(const int &i :  A)
	{
		if(firstItem)
			firstItem = false;
		else
			printf(" ");
		printf("%d",i);
	}
	return 0;
}
