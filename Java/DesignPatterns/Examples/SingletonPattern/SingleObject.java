/*************************************************************************
    > File Name: SingleObject.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class SingleObject
{
	private static SingleObject instance = new SingleObject();
	private SingleObject()
	{

	}
	public static SingleObject getInstance()
	{
		return instance;
	}
	public void showMessage()
	{
		System.out.println("Hello World!");
	}
}
