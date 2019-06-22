/*************************************************************************
    > File Name: Exponentiation.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

import java.math.BigDecimal;
import java.util.Scanner;

public class  Main
{
	public  static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		while(s.hasNext())
		{
			BigDecimal number = s.nextBigDecimal();
			number = number.pow(s.nextInt());
			String result = number.stripTraillingZeros().toPlainString();
			if('0' == result.charAt(0) && '.') == result.charAt(1)
			{
				result = result.substring(1);
			}
			System.out.println(result);
		} 
		s.close();
	}
}
