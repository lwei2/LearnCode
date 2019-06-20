/*************************************************************************
    > File Name: LongestSubstringWithoutRepeatingCharacters.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
class Solution
{
	public int lengthOfLongestSubstring(String s)
	{
		int res = 0;
		int n = s.length();
		Map<Character, Integer> map = new HashMap<>();
		for(int end = 0, start = 0; end < n; end++)
		{
			char alpha = s.charAt(end);
			if(map.containsKey(alpha))
			{
				start = Math.max(map.get(alpha), start);				
			}
			res = Math.max(res, end - start + 1);
			map.put(s.charAt(end), end+1);
		}
		return res;
	}
}
