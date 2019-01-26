/*************************************************************************
    > File Name: Pro1009.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Solution
{
	public int RectCover(int target)
	{
		if(target == 0)
			return 0;
		if(target == 1)
			return 1;
		if(target*2 == 2)
			return 1;
		else if(target*2 == 4)
			return 2;
		else 
			return RectCover(target-1) + RectCover(target-2);

	}
}
