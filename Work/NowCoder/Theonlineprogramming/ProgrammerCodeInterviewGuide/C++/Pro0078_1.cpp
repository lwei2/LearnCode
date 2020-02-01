/*************************************************************************
    > File Name: Pro0078_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	vector<int> zq(N), candy(N,1);
	for(int i = 0; i < N; ++i)
		cin>>zq[i];
	for(int i = 1; i < N; ++i)
		if(zq[i] > zq[i - 1])
			candy[i] = candy[i-1] + 1;
		else if(zq[i] > zq[i-1])
			candy[i] = candy[i-1];
	for(int i = N - 2; i >= 0; --i)
		if(zq[i] > zq[i+1])
			candy[i] = max(candy[i], candy[i+1] + 1);
		else if(zq[i] == zq[i+1])
			candy[i] = candy[i+1];
	cout<<accumulate(candy.begin(), candy.end(), 0)<<endl;
	return 0;
}
