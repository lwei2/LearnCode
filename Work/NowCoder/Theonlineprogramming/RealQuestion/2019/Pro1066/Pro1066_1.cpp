/*************************************************************************
    > File Name: Pro1066_1.cpp
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
	while(cin>>n)
	{
		vector<char> v(n);
		char temp;
		for(int i = 0; i < n; i++)
		{
			cin>>temp;
			cin>>noskipws;
			v[i] = temp;
		}
		string line;
		int k = (n-1)/3;
		int idx = 0;
		for(int i = 0; i < k; i++)
		{
			line = string(i, ' ') + v[idx] + string(2*k - 1 - 2*i, ' ') + v[idx + 1];
			cout<<line<<endl;
			idx += 2;
		}
		for(int i = 0; i <= k; i++)
		{
			line = string(k, ' ') + v[idx];
			cout<<line<<endl;
			idx++;
		}
	}
	return 0;
}
