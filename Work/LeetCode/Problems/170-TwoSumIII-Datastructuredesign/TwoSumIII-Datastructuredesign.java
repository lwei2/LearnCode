/*************************************************************************
    > File Name: TwoSumIII-Datastructuredesign.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
import java.util.HashMap;
import java.util.Map;

public class TwoSum
{
	Hashmap<Integer, Integer> map = new HashMap<Integer, Integer>();
	public void add(int input)
	{
		if(map.containsKey(input))
			map.put(input, map.get(input) + 1);
		else
			map.put(input,1);
	}
	public boolean find(int sum)
	{
		for(Map.Entry<Integer, Integer> entry : map.entrySet())
		{
			if(map.containsKey(sum - entry.getKey()))
			{
				if(entry.getKey() == sum - entry.getKey() && entry.getValue() == 1)
					return false;
				return  true;
			}
		}
		return false;
	}

	public static void main(String[] args)
	{
		/*
		 *TwoSum a = new TwoSum();
		 *a.add(2);
		 *System.out.println(a.find(4) == false);
		 */
	}
}


/*
 *@twoSum
 */

public class twoSum2
{
	private HashMap<Integer, Integer> container = new HashMap<Integer, Integer>();
	public void add(int number)
	{
		if(!container.containsKey(number))
			container.put(number,1);
		else
			container.put(number, container.get(number) + 1);
	}
	public boolean find(int number)
	{
		for(int i : container.keySet())
		{
			int match = number - i;
			if(container.containsKey(match))
			{
				if(i == match && container.get(i) < 2)
					continue;
				return true;
			}
		}
		return false;
	}
}
