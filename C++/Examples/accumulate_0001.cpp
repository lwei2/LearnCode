/*************************************************************************
    > File Name: accumulate_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void)
{
	int val;
	vector<int> vec;
	
	for(int i = 0; i < 5; i++)
		vec.push_back(i);

	cout<<"sum:"<<accumulate(vec.begin(), vec.end(), 0)<<endl;
	return 0;
}
