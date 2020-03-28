/*************************************************************************
    > File Name: Pro1076_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A;

int main(void)
{
	ios_base::sync_with_stdio(false);
	int m,n,k;
	cin>>m>>n;
	A.resize(m);
	for(auto &i : A)
		i.resize(n);
	for(auto &i : A)
	{
		for(auto &j : i)
		{
			cin>>j;
		}
	}
	cin>>k;
	int current_i = 0;
	int current_j = n - 1;
	bool haveAns = false;
	while(current_i < m && current_j >= 0)
	{
		if(k < A[current_i][current_j])
			--current_j;
		else if(k > A[current_i][current_j])
			++current_i;
		else
		{
			haveAns = true;
			break;
		}
	}
	if(haveAns)
		cout<<"true";
	else
		cout<<"false";
	cout<<endl;
	return 0;
}
