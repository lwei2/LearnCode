/*************************************************************************
    > File Name: Pro1000_1.java
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

public class Main
{
	public static void main(String[] args)
	{
		InputReader reader = new InputReader(System.in);
		PrintWriter writer = new PrintWriter(new BufferedOutputStream(System.out));

		int jobNumber = reader.nextInt();
		int friendNumber = reader.nextInt();

		int[] powers = new int[friendNumber];
		TreeMap<integer, Integer> jobs = new TreeMap<>();
		for(int i = 0; i < jobNumber; i++)
		{
			int k = reader.nextInt();
			int v1 = reader.nextInt();
			Integer v2 = jobs.putIfAbsent(k,v1);
			if(v2 != null && v1 > v2)
				jobs.put(k,v2);
		}
		for(int i = 0; i < friendNumber; i++)
		{
			powers[i] = reader.nextInt();
			jobs.putIfAbsent(powers[i],0);
		}
		analyseJobs(jobs);
		for(int i : powers)
		{
			Integer s = jobs.get(i);
			writer.println(s);
		}
		writer.flush();
	}
	private static void analyseJobs(TreeMap<Integer, Integer> jobs)
	{
		Set<Map.Entry<Integer, Integer>> entries = jobs.entrySet();
		Map.Entry<Integer, Integer> c = null;
		for(Map.Entry<Integer, Integer> e : entries)
		{
			if(c == null || c.getValue() < e.getValue())
				c = e;
			else
				e.setValue(c.getValue());
		}
	}
	static class InputReader
	{
		private InputStream stream;
		private byte[] inbuf = new byte[1024];
		private int lenbuf = 0;
		private int ptrbuf = 0;
		public InputReader(InputStream stream)
		{
			this.stream = stream;
		}
		private int readByte()
		{
			if(lenbuf == -1)
				throw new UnknownError();
			if(ptrbuf >= lenbuf)
			{
				ptrbuf = 0;
				try{
					lenbuf = stream.read(inbuf);
				}catch(IOException e){
					throw new UnknownError();
				}
				if(lenbuf <= 0)
				{
					return -1;
				}
			}
			return inbuf[ptrbuf++];
		}
		
		public int nextInt()
		{
			int num = 0, b;
			boolean minus = false;
			while((b = readByte()) != -1 && !((b >= '0' && b <= '9')) || b == '-')
				;
			if(b == '-')
			{
				minus = true;
				b = readByte();
			}
			while(true)
			{
				if(b >= '0' && b <= '9')
				{
					num = num * 10 + (b - '0');
				}
				else
					return minus ? -num : num;
				b = readByte();
			}
		}
	}
}




