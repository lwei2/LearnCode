/*************************************************************************
    > File Name: Pro1045_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin>>str;
	int size = str.size();
	vector<int> dp(size+1,0);
	dp[0] = 1;
	for(int i = 0; i < size; i++)
	{
		dp[i+1] = str[i] == '0' ? 0 : dp[i];
		if(i >= 1 && (str[i - 1] == '1' || (str[i-1] == '2' && str[i] <= '6')))
			dp[i+1] += dp[i-1];
	}
	cout<<dp[size]<<endl;
	return 0;
}

