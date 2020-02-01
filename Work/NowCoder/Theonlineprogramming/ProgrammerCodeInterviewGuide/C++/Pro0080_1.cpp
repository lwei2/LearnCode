/*************************************************************************
    > File Name: Pro0080_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	priority_queue<int, vector<int>, less<>> pq1;
	priority_queue<int, vector<int>, greater<>> pq2;

	int n;
	cin>>n;
	int val1;
	long long val2;
	for(int i = 0; i < n; i++)
	{
		scanf("%lld",&val2);
		if(val2 == 1)
		{
			scanf("%d",&val1);
			if(pq1.empty())
				pq1.push(val1);
			else
			{
				if(pq1.size() > pq2.size())
				{
					pq1.push(val1);
					pq2.push(pq1.top());
					pq1.pop();
				}
				else
				{
					pq1.push(val1);
					if(pq1.top() > pq2.top())
					{
						pq2.push(pq1.top());
						pq1.pop();
						pq1.push(pq2.top());
						pq2.pop();
					}
				}
			}
		}
		else
		{
			if(pq1.size() + pq2.size() == 0)
				cout<<-1<<endl;
			else if((pq1.size() + pq2.size())%2 == 0)
				printf("%.1f\n",(pq1.top() + pq2.top())/2.0);
			else
				printf("%.1f\n",(double)pq1.top());
		}
	}

	return 0;
}
