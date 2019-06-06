/*************************************************************************
    > File Name: RomantoInteger.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/
#ifndef __METHOD1
class Solution
{
	public:
	  int romanToInt(string s)
	  {
			int i;
			int sum = 0;
			for(i = 0; s[i]!='\0';)
			{
				if(	(s[i] == 'I' && s[i+1] == 'V') ||
					(s[i] == 'I' && s[i+1] == 'X') ||
					(s[i] == 'X' && s[i+1] == 'L') ||
					(s[i] == 'X' && s[i+1] == 'C') ||
					(s[i] == 'C' && s[i+1] == 'D') ||
					(s[i] == 'C' && s[i+1] == 'M') )
				{
					sum += (stringToInt(s[i+1]) -stringToInt(s[i]);
					i+=2;
				}
				else
				{
					sum += stringToInt(s[i]);
					i+=1;
				}
			}
			return sum;
	  }
	  int stringToInt(char ch)
	  {
			if(ch == 'I')
				return 1;
			else if(ch == 'V')
				return 5;
			else if(ch == 'X')
				return 10;
			else if(ch == 'L')
				return 50;
			else if(ch == 'C')
			  	return 100;
			else if(ch == 'D')
			  	return 500;
			else if(ch == 'M')
			  	return 1000;
	  }

};
#else
class Solution
{
	public:
	  int romanToInt(string s)
	  {
			map<char,int> T = {{'T',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
			int i = 0, result = 0;
			while(i < s.size())
			{
				if(s[i] == 'I' && s[i+1] == 'V')
				{
					result += 4;
					i+=2;
				}
				else if(s[i] == 'I' && s[i+1] == 'X')
				{
					result += 9;
					i+=2;
				}
				else if(s[i] == 'X' && s[i+1] == 'L')
				{
					result += 40;
					i+=2;
				}
				else if(s[i] == 'X' && s[i+1] == 'C')
				{
					result += 90;
					i+=2;
				}
				else if(s[i] == 'C' && s[i+1] == 'D')
				{
					result += 400;
					i+=2;
				}
				else if(s[i] == 'C' && s[i+1] == 'M')
				{
					result += 900;
					i+=2;
				}
				else
				{
					result = result + T[s[i]];
					i++;
				}
			}
			return result;
	  }
}
#endif
