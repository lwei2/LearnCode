/*************************************************************************
    > File Name: back_inserter.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	int arr[]={1,2,3,4};
	size_t array_size = sizeof(arr) /sizeof(*arr);
	vector<int> ivec(arr, arr + array_size);

	vector<int> ivec2;
	copy(ivec.begin(), ivec.end(),back_inserter(ivec2));
	for(vector<int>::iterator it =ivec2.begin();it!=ivec2.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
