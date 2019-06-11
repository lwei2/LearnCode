/*************************************************************************
    > File Name: count_if_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool greaterforten(int value)
{
	return value > 10;
}

int main(void)
{
	vector<int> v1;
	vector<int>::iterator it;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(10);

	for(it = v1.begin(); it!=v1.end(); ++it)
		cout<<*it<<'\t';
	cout<<endl;
	vector<int>::size_type res = count_if(v1.begin(), v1.end(), greaterforten);
	cout<<"res:"<<res<<endl;

	return 0;
}
