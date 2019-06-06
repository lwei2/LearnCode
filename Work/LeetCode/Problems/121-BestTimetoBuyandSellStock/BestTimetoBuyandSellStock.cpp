class Solution
{
	public:
		int maxProfit(vector<int>& prices)
		{
			if(prices.empty())
			  return 0;
			int min = prices[0];
			int max = prices[0];
			int profit = 0;
			for(auto & p:prices)
			{
				if(p<min)
				{
					min = p;
					max = p;
				}
				else if(p > max)
				{
					max = p;
				}
				if(max - min >profit)
				{
					profit = max -min;
				}
			}
			return profit;
		}
};
