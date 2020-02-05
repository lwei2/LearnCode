/*************************************************************************
    > File Name: 11-23.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main(void)
{
	binder1st<plus<int>> plusObj = bind1st(plus<int>(), 10);
	binder1st<minus<int>> minusObj = bind1st(minus<int>(), 10);
	cout<<plusObj(20)<<endl;
	cout<<minusObj(20)<<endl;
	vector<int> v;
	for(int i = 1; i < 10; i++)
		v.push_back(i);
	int n = count_if(v.begin(), v.end(), bind1st(less_equal<int>(), 4));
	cout<<">=4 - count:"<<n<<endl;
	return 0;
}
