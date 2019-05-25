/*************************************************************************
    > File Name: vector_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v1(5,5);
	vector<int> v2(v1);

	for(int i = 0; i < v1.size(); i++)
		cout<<v1[i]<<' ';

	cout<<endl;
	vector<int>::iterator it = v2.begin();
	while(it!=v2.end())
	{
		cout<<*it<<' ';
		++it;
	}

	return 0;
}
