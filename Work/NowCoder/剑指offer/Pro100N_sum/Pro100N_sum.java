/*************************************************************************
    > File Name: Pro100N_sum.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Solution
{
	public int Sum_Solution(int n)
	{
		int sum = n;
		boolean ans = (n>0) && ((sum+=Sum_Solution(n-1))>0);
		return sum;
	}
};
