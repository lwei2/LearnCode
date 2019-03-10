/*
函数名：IsPrime函数功能：
判别自然数n是否为素数。
输入值：int n，
自然数n返回值：bool，若自然数n是素数，返回true，否则返回false
*/

bool IsPrime(unsigned int n)
{
	unsigned maxFactor = sqrt(n);
	for(unsigned int i = 2; i <= maxFactor; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

