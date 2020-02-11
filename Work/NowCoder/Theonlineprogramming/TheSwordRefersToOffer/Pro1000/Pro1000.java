/*************************************************************************
    > File Name: Pro1000.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public class Solution
{
	public boolean Find(int [][]array, int target)
	{
		boolean found = false;
		int hang = array.length;
		int lie = array[0].length;
		int row = 0, col = lie - 1;
		while(row < hang && col >= 0)
		{
			int value = array[row][col];
			if(target > value)
				row++;
			else if(target < value)
				col--;
			else
			{
				found = true;
				break;
			}
		}
		return found;
	}
}
