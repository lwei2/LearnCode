
/*
	实现 int sqrt(int x) 函数。
	计算并返回 x 的平方根，其中 x 是非负整数。
	由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

*/
class Solution
{
	public:
		int mySqrt(int x)
		{
			int low = 0;
			int high = x/2;
			int result = 0;
			if(x == 1)
			  return 1;
			while(low<=high)
			{
				long mid = low + (high - low)/2;
				if(mid * mid < x)
				{
					result = (int) mid;
					low = (int) mid + 1;
				}
				else if( mid * mid > x)
				{
					high = (int) mid - 1;
				}
				else
				  return (int)mid;
			}
			return result;
		}
	
};
