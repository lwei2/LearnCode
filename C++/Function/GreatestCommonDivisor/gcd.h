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

#if
int gcd(int num1, int num2)
{
	int tmp;
	if(num1 < num2)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	while(num2!=0)
	{
		tmp = num1%num2;
		num1 = num2;
		num2 = tmp;
	}
	return num1;
}
#elif
int gcd(int num1, int num2)
{
	int ans = 0;
	for(int i = 1; i <= num1; i++)
		if(num1%i == 0 && num2%i == 0)
			ans = i;
	return (num1*num2)/ans;
}
#else
int gcd(int num1, int num2)
{
	if(num1%num2 == 0)
		return num2;
	else
		return gcd(num2, num1%num2);
}
#endif
