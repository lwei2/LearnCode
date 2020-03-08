/*************************************************************************
    > File Name: Pro1046_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> people;
	int tmp, count = 0;
	while(cin>>tmp)
		people.push_back(tmp);
	people.pop_back();
	int num = people.size();
	int limit = tmp;
	sort(people.begin(), people.end());

	int low = 0, high = num - 1;
	while(low < high)
	{
		if(people[low] + people[high] <= limit)
		{
			low++;
			high--;
		}
		else
		{
			high--;
		}
		count++;
	}
	count += (high == low);
	cout<<count;
	return 0;
}
