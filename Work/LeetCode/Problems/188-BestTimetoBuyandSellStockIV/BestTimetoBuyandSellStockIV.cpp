/*************************************************************************
    > File Name: BestTimetoBuyandSellStockIV.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int maxProfit(int k, vector<int>& prices)
		{
			if(prices.size() <= 0 || k <= 0)
				return 0;
			if(k >= prices.size()/2)
			{
				int nResult = 0;
				for(int i = 1; i < prices.size(); i++)
					nResult = max(nResult, nResult + (prices[i] - prices[i-1]));
				return nResult;
			}
			int nBuy[k];
			int nSell[k];
			for(int i =0; i < k; i++)
			{
				nBuy[i] = -prices[0];
				nSell[i] = 0;
			}
			for(int i = 1; i < prices.size(); i++)
			{
				for(int j = k - 1; j > 0; j--)
				{
					nSell[j] = max(nSell[j],nBuy[j] + prices[i]);
					nBuy[j] = max(nBuy[j], nSell[j-1] - prices[i]);
				}
				nSell[0] = max(nSell[0], nBuy[0] + prices[i]);
				nBuy[0] = max(nBuy[0], -prices[i]);
			}
			return nSell[k-1];
		}
};

int main(void)
{
	return 0;
}
