/*************************************************************************
    > File Name: BestTimetoBuyandSellStockIII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Solution
{
	public:
		int maxProfit(vector<int>& prices)
		{
			if(prices.size() == 0)
				return 0;
			int buy1 = INT_MIN, buy2 = INT_MIN;
			int sell1 = 0, sell2 = 0;	
			for(int i = 0; i < prices.size(); i++)
			{
				buy1 = max(buy1,-prices[i]);
				sell1 = max(sell1, buy1 + prices[i]);
				buy2 = max(buy2, sell1 - prices[i]);
				sell2 = max(sell2, buy2 + prices[i]);
			}
			return sell2;
		}
};
int main(void)
{
	return 0;
}
