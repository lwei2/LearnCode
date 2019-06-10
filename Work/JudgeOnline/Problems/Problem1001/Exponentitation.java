/*************************************************************************
    > File Name: Exponentitation.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

import java.io.*;
import java.util.*;
import java.math.BigDecimal;

public class Main
{
	public static void main(String args[]) throws Exception
	{
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext())
		{
			BigDecimal r = cin.nextBigDecimal();
			int n = cin.nextInt();
			r = r.pow(n).stripTrailingZeros();
			String mStr = r.toPlainString();
			if(mStr.charAt(0) == '0')
				mStr = mStr.substring(1);
			System.out.println(mStr);
		}
	}
}
