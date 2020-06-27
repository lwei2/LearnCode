
imiport java.io.File;

public class Test 
{
	public static void main(String[] args)
	{
		File file = new File("C:");
		FindFile(file);
	}
	public static void FindFile(File file)
	{
		File[] files = file.listFiles();
		if(files != null)
		{
			for(File f : files)
			{
				if(f.isFile() && f.getName().endsWith(".wmv"))
				{
					System.out.println(f.getName());
				}
				if(f.isDirectory())
					Filefile(f);
			}
		}
	}
}