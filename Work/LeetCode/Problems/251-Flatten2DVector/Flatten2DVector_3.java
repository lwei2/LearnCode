/*************************************************************************
    > File Name: Flatten2DVector_3.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public class Vector2D
{
	private Iterator<List<Integer>>outerIterator;
	private Iterator<Integer> innerIterator;

	public Vector2D(List<Integer>> vec2d)
	{
		outerIterator = vec2d.iterator();
		innerIterator = Collections.emptyIterator();
	}
	public int next()
	{
		return innerIterator.next();
	}
	public boolean hasNext()
	{
		if(innerIterator.hasNext())
			return true;
		if(!outerIterator.hasNext())
			return false;
		innerIterator = outerIterator.next().iterator();
		return hasNext();
	}

}
