/*************************************************************************
    > File Name: Pro0054_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include  <stack>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	long long v[n];
	for(int i = 0; i < n; i++)
		scanf("%lld",&v[i]);

	stack<long long> st;
	long long min_val = 0, ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(st.empty() || v[st.top()] > v[i])
			st.push(i);
		else
		{
			while(st.size() > 1 && v[st.top()] <= v[i])
			{
				min_val = v[st.top()];
				st.pop();
				ans = ans + ((min(v[st.top()], v[i])-min_val))*(i-st.top() - 1);
			}
			while(!st.empty() && v[st.top()] <= v[i])
				st.pop();
			st.push(i);
		}
	}
	cout<<ans<<endl;
	return 0;
}
