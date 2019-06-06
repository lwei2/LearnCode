

class Solution
{
	public:
		string countAndSay(int n)
		{
			string oldStr = "1";
			string newStr;
			newStr.clear();
			for(int j=2;j<=n;j++)
			{
				int i = 0;
				int count = 0;
				char ch = '\0';
				char temp[20];
				while(i <= oldStr.size())
				{
					if(ch == '\0')
					{
						ch =oldStr[i];
						count++;
					}
					else if(oldStr[i] ==ch)
					{
						count++;
					}
					else
					{
						sprintf(temp,"%d%c",count,ch);
						newStr+=temp;
						ch=oldStr[i];
						count=1;
					}
					i++;
				}
				oldStr=newStr;
				newStr.clear();
			}
			return oldStr;
		}
};
