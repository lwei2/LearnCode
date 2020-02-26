/*************************************************************************
    > File Name: Pro1035_1.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int n = Integer.parseInt(input.nextLine());
		for(int i = 1; i <= n; i++)
		{
			if((1 + i)*i/2 >= n)
			{
				System.out.println(i);
				break;
			}
		}
	}
}
