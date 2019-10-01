/*************************************************************************
    > File Name: Pro17.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有一个非负整数，请编写一个算法，打印该整数的英文描述。

给定一个int x，请返回一个string，为该整数的英文描述。

测试样例：
1234
返回："One Thousand,Two Hundred Thirty Four"
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class ToString
{
	public:
		string toString(int x)
		{
			string Number[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"};
	        string TEN[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty","Ninety"};
		    string Index[] = {"", "Thousand", "Million", "Billion"};
			stack<string> s;
			string res = "";
			int count = 0;
			while(x)
			{
				int temp = x%1000;
				if(temp == 0)
				{
					count++;
					x /= 1000;
					continue;
				}
				s.push(Index[count++]);
				if(temp % 100 >= 10 && temp % 100 < 20)
				{
					s.push(Number[temp%100]);
					temp /= 100;
				}
				else
				{
					s.push(Number[temp%10]);
					temp /= 10;
					s.push(TEN[temp%10]);
					temp /= 10;
				}
				if(temp != 0)
				{
					s.push("Hundred");
					s.push(Number[temp%10]);
				}
				x /= 1000;
			}
			string last = "";
			while(!s.empty())
			{
				string t = s.top();
				s.pop();
				if(t == "")
					continue;
				if(last == "Thousand" || last == "Million" || last == "Billion")
					res += ",";
				else if(last != "")
					res += " ";
				res += t;
				last = t;
			}
			return res;

		}
};


int main(void)
{
	return 0;
}
