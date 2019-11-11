/*************************************************************************
    > File Name: SingleObjectDemo.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class SinglePatternDemo
{
	public static void main(String[] args)
	{
		SingleObject object = SingleObject.getInstance();
		object.showMessage();
	}
}
