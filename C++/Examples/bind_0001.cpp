/*************************************************************************
    > File Name: bind_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	vector<int> coll;
	for(int i = 1; i <= 10; ++i)
		coll.push_back(i);
	int res = count_if(coll.begin(), coll.end(), bind1st(greater<int>(),10));
	cout<<res<<endl;
	

	int res1 = count_if(coll.begin(), coll.end(), bind2nd(less<int>(), 10));
	cout<<res1<<endl;


	return 0;
}
