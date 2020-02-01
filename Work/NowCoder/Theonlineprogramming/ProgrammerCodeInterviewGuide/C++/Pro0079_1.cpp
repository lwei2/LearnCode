/*************************************************************************
    > File Name: Pro0079_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> num(n,0);
	for(int i = 0; i < n; ++i)
		cin>>num[i];
	vector<int> v(n+1, 0);
	int index = 0;
	while(index < n - 1)
	{
		for(int i = 0; i < n; ++i)
		{
			if(num[i] == index + 1)
			{
				v[num[i]] = 1;
				int tmp = num[i];
				while(v[tmp] && tmp < n + 1)
				{
					cout<<tmp<<" "<<num[i]<<endl;
					++tmp;
				}
				index = tmp - 1;
			}
			else
				v[num[i]] = 1;
		}
	}
	return 0;
}
