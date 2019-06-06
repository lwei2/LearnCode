class Solution
{
	public:
		string convert(string s, int numRows)
		{
			string result;
			if(s.empty())
			  return result;
			if(numRows<=1)
			  return s;
			const int maxGap = 2* numRows - 2;
			for(int i = 0;i<numRows;i++)
			{
				int start = i, gap = 0, turnFlag = -1;
				while(start + gap < s.size())
				{
					if(i==0||i==numRows - 1)
					{
						result+=s[start+=gap];
						gap = maxGap;
					}
					else
					{
						result+=s[start+=gap];
						turnFlag *= -1;
						if(turnFlag == 1)
						  gap = maxGap - 2*i;
						else
						  gap = 2*i;
					}
				}
			}
			return result;
		}
};
