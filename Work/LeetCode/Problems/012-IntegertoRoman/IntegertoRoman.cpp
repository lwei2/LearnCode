/*************************************************************************
    > File Name: IntegertoRoman.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

class Solution
{
	public:
	  string intToRoman(int num)
	  {
			string result;
			while(num>0)
			{
				if(num>=1 && num<4)
				{
					result +="I";
					num = num -1;
				}
				else if(num >=4 && num < 9)
				{
					if(num == 4)
					{
						result += "IV";
						num = num - 4;
					}
					else
					{
						result += "V";
						num = num - 5;
					}
				}
				else if(num >= 9 && num < 40)
				{
					if(num==9)
					{
						result +="IX";
						num = num -9;
					}
					else
					{
						result +="X";
						num = num - 10;
					}
				}
				else if(num >= 40 && num < 90)
				{
					if(num < 50)
					{
						result +="XL"
						num = num - 40;
					}
					else
					{
						result +="L";
						num = num -50;
					}
				}
				else if(num >= 90 && num < 400)
				{
					if(num < 100)
					{
						result += "XC";
						num = num - 90;
					}
					else
					{
						result +="C";
						num = num -100;
					}
				}	  
				else if(num >= 400 &&num < 900)
				{
					if(num < 500)
					{
						result +="CD";
						num = num - 400;
					}
					else
					{
					  result +="D";
					  num = num - 500;
					}
				}
				else if(num >= 900)
				{
					if(num < 1000)
					{
						result +="CM";
						num = num - 900;
					}
					else
					{
						result +="M";
						num = num - 1000;
					}
				}

			}
			return result;
	  }
};


