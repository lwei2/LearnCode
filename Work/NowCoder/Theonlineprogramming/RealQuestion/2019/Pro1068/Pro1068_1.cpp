/*************************************************************************
    > File Name: Pro1068_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main(void)
{
	int n;
	cin>>n;
	while(n--)
	{
		int N;
		int tmp;
		cin>>N;

		vector<int> vec;
		vector<int>::iterator it;
		for(int i = 0; i < N; i++)
		{
			cin>>tmp;
			it = find(vec.begin(), vec.end(), tmp);
			if(it != vec.end())
				*it = 0;
			vec.push_back(tmp);
		}
		int len = vec.size();
		for(int i = len - 1; i >= 0; i--)
		{
			if(vec[i] != 0)
				cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
