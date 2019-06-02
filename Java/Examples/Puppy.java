/*************************************************************************
    > File Name: Puppy.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

public class Puppy{
	int puppyAge;
	public Puppy(String name)
	{
		System.out.println("The dog'name is "+ name);
	}
	public void setAge(int age)
	{
		puppyAge = age;
	}
	public int getAge()
	{
		System.out.println("The dog'age is" + puppyAge);
		return puppyAge;
	}
	public static void main(String[] args)
	{
		Puppy myPuppy = new Puppy("Tom");
		myPuppy.setAge(2);
		myPuppy.getAge();
		System.out.println("age:"+myPuppy.puppyAge);
	}
}
