/*************************************************************************
    > File Name: Pro1010.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Solution
{
	public int NumberOf1(int n)
	{
		int count = 0;
		while(n!=0)
		{
			count++;
			n = (n-1) & n;
		}
		return count;
	}
}
