/*************************************************************************
    > File Name: Pro0150_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<vector<int> > A(n, vector<int>(n));
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			cin>>A.at(j).at(n-1-i);
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(j > 0)
				cout<<' ';
			cout<<A.at(i).at(j);
		}
		cout<<endl;
	}
	return 0;
}
