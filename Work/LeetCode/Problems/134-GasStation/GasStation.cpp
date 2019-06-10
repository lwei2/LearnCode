/*************************************************************************
    > File Name: GasStation.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
	public:
		int canCompleteCircuit1(vector<int>& gas, vector<int>& cost)
		{
			int start = 0,total = 0, sum = 0;
			for(int i = 0; i < gas.size(); ++i)
			{
				int sub = gas[i] - cost[i];
				total += sub;
				sum += sub;
				if(sum < 0)
				{
					sum = 0;
					start = i+1;
				}
			}
			return total < 0 ? - 1: start;
		}

	public:
		int canCompleteCircuit2(vector<int>& gas, vector<int>& cost)
		{
			int gas_sum = accumulate(gas.begin(), gas.end(), 0);
			int cost_sum = accumulate(cost.begin(), cost.end(), 0);
			if(gas_sum < cost_sum)
				return -1;
			int sum = 0;
			int result = 0;
			for(int i = 0; i < gas.size(); ++i)
			{
				sum += gas[i] - cost[i];
				if(sum < 0)
				{
					sum = 0;
					result = (i+1)%gas.size();
				}
			}
			return result;
		}
};
int main(void)
{
	return 0;
}
