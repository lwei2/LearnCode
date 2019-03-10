/*
函数功能：
利用欧几里德算法，采用迭代方式，求两个自然数的最大公约数函数名：
Gcd输入值：unsigned int a，自然数a；unsigned int b，
自然数b返回值：unsigned int，两个自然数的最大公约数 
 */

unsigned int Gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;
	while(b!=0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}
