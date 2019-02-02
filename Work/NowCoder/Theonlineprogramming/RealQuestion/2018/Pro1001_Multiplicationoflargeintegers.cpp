/*************************************************************************
    > File Name: Pro1001_Multiplicationoflargeintegers.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有两个用字符串表示的非常大的大整数,算出他们的乘积，也是用字符串表示。不能用系统自带的大整数类型。
输入描述:
空格分隔的两个字符串，代表输入的两个大整数
输出描述:
输入的乘积，用字符串表示
输入
72106547548473106236 982161082972751393
输出
70820244829634538040848656466105986748
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

string Mul(string left, string right)
{
	size_t Lsize = left.size();
	size_t Rsize = right.size();
	size_t Size = Lsize + Rsize;
	string res(Size, '0');

	int takeover = 0, offset = 0;
	for(size_t index = 1; index <= Rsize; ++index)
	{
		int i;
		takeover = 0;
		int rightnum = right[Rsize - index] - '0';
		for(i = 1; i <= Lsize; ++i)
		{
			char resBit = res[Size - i - offset] - '0';
			int num = rightnum * (left[Lsize - i] - '0')+takeover+resBit;
			takeover = num/10;
			res[Size - i - offset] = num%10 + '0';
		}
		if(takeover != 0)
			res[Size - i - offset] = takeover + '0';
		offset++;
	}
	if(res[0] == '0')
		res.erase(0,1);
	return res;
}
int main(void)
{
	string s1,s2;
	cin>>s1>>s2;
	string str=Mul(s1,s2);
	cout<<str<<endl;

	return 0;
}
