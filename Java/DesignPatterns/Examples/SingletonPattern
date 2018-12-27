@皇帝类
public class Emperor
{
	private static final Emperor = new Emperor();
	private Emperor()
	{

	}
	public static Emperor getInstance()
	{
		return emperor;
	}
	public static void say()
	{
		System.out.println("我就是皇帝某某某...");
	}

}
@臣子类
public class Minister
{
	public static void main(String[]args)
	{
		for(int day = 0; day < 3; day++)
		{
			Emperor emperor = Emperor.getInstance();
			emperor.say();
		}
	}
}

@7-3单例模式通用代码
public class Singleton
{
	private static final Singleton = new Singleton();
	private Singleton()
	{

	}
	public static Singleton getSingleton()
	{
		return singleton;
	}
	public static void doSomething()
	{

	}
}
@7-4线程不安全的单例
public class Singleton
{
	private static Singleton singleton = null;
	private Singleton()
	{

	}
	public static Singleton getSingleton()
	{
		if(singleton == null)
			singleton = new Singleton();
		return singleton;
	}
}
@7-5固定数量的皇帝类
public class Emperor
{
	private static int maxNumOfEmperor = 2;
	private static ArrayList<String>nameList = new ArrayList<String>();
	private static ArrayList<Emperor> emperorList = new ArrayList<Emperor>();
	private static int countNumOfEmperor = 0;
	static {
		for(int i = 0; i < maxNumOfEmperor; i++)
			emperorList.add(new Emperor("皇"+(i+1)+"帝"));
	}
}
private Emperor()
{

}
private Emperor(String name)
{
	nameList.add(name);
}
public static Emperor getInstance()
{
	Random random = new Random();
	countNumOfEmperor = random.nextInt(maxNumOfEmperor);
	return emperorList.get(countNumOfEmperor);
}
public static void say()
{
	System.out.println(nameList.get(countNumOfEmperor));
}
@7-6臣子参拜皇帝的过程
public class Minister
{
	public static void main(String[]args)
	{
		int ministerNum = 5;
		for(int i=0; i < ministerNum; i++)
		{
			Emperor emperor = Emperor.getInstance();
			System.out.println("第"+(i+1)+"个大臣参拜的是:");
			emperor.say();
		}
	}
}
