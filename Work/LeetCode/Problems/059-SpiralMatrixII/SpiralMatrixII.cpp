class Solution
{
	public:
		vector<vector<int>>generateMatrix(int n)
		{
			vector<vector<int> > res(n, vector<int>(n));
			int lo = 0;
			int hi = n - 1;
			int x = 1;
			while(lo < hi)
			{
				for(int j = lo; j < hi; j++)
				{
					res[lo][j] = x++;
				}
				for(int i = lo; i < hi; i++)
				{
					res[i][hi] = x++;
				}
				for(int j = hi; j > lo; j--)
				{
					res[hi][j] = x++;
				}
				for(int i = hi; i > lo; i--)
				{
					res[i][lo] = x++;
				}
				lo++;
				hi--;
			}
			if(lo == hi)
			{
				res[lo][lo] = x;
			}
			return res;
		}
}
