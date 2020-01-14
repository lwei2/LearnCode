/*************************************************************************
    > File Name: var.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
public class var
{
	int a = 10;
	int b = 21;
	public static void main(String[] args)
	{
		var v = new var();
		System.out.println("a="+v.a);
		v.print();
	}
	void print()
	{
		int c = 20;
		System.out.println("c="+c);
	}
}
