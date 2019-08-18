/*************************************************************************
    > File Name: Flatten2DVector_1.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Vector2D
{
	Iterator<List<Integer>> it;
	Iterator<Integer> curr;
	public Vector2D(List<List<Integer>> vec2d)
	{
		it = vec2d.iterator();
	}
	public int next()
	{
		hashNext();
		return curr.next();
	}
	public boolean hasNext()
	{
		while(curr == null || !cur.hasNext() && it.hasNext())
			curr = it.next().iterator();
		return curr != null && curr.hasNext();
	}
}
