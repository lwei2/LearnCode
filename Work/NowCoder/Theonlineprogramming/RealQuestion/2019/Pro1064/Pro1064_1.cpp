/*************************************************************************
    > File Name: Pro1064_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int &a, int &b)
{
	return a > b;
}

int main(void)
{
	int tmp;
	getchar();
	vector<int> v;
	while(cin>>tmp)
	{
		v.push_back(tmp);
		if(getchar() == ']')
			break;
	}
	sort(v.begin(), v.end(), compare);
	cout<<v[2];
	return 0;
}
