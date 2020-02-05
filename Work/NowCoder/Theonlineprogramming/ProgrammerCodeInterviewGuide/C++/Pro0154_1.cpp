/*************************************************************************
    > File Name: Pro0154_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		int tmp = 0;
		map<int, int> v;
		v.clear();
		for(int i = 0; i < n; i++)
		{
			cin>>tmp;
			v[tmp]++;
		}
		int k = n/2;
		for(auto ptr = v.begin(); ptr != v.end(); ptr++)
		{
			if(ptr->second > k)
			{
				cout<<ptr->first<<endl;
				return 0;
			}
		}
		cout<<"-1"<<endl;
	}
	return 0;
}
