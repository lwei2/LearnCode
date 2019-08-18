/*************************************************************************
    > File Name: GroupShiftedStrings.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public List<List<String> >groupStrings2(String[] strings)
{
	List<List<String>> res = new ArrayList<List<String>>();
	HashMap<String, ArrayList<String>> m = new HashMap<String, ArrayList<String>>();
	for(String a : strings)
	{
		StringBuilder  sb = new StringBuilder();
		for(char c : a.toCharArray())
		{
			sb.append((c + 26 - a.charAt(0))%26);
			sb.append(",");
		}
		String t = sb.toString();
		if(m.containsKey(t))
			m.get(t).add(a);
		else
		{
			m.put(t, new ArrayList<>());
			m.get(t).add(a);
		}
	}
	res.addAll(m.values());
	return res;
}
