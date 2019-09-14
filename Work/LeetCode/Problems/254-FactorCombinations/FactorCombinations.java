/*************************************************************************
    > File Name: FactorCombinations.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Solution
{
	public List<List<Integer>> getFactors(int n)
	{
		List<List<Integer>> result = new ArrayList<List<Integer>>();
		helper(result, new ArrayList<Integer>(), n, 2);
		return result;
	}

	public void helper(List<List<Integer>> result, List<Integer> item, int n, int start)
	{
		if(n <= 1)
		{
			if(item.size() > 1)
				result.add(new ArrayList<Integer>(item));
			return;
		}
		for(int i = start, i*i <= n; ++i)
		{
			if(n%i == 0)
			{
				item.add(i);
				helper(result, item, n/i, i);
				item.remove(item.size() - 1);				
			}
		}
		int i = n;
		item.add(i);
		helper(result, item, 1, i);
		item.remove(item.size() - 1);
	}
}
