/*************************************************************************
    > File Name: SortingOfThreeNumbers.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

/*函数功能：三个数的排序*/

#if

void SortingOfThreeNumbers(int x, int y, int z)
{
	int t = 0;
	if(x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if(x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if(y > z)
	{
		t = y;
		y = z;
		z = t;
	}
}


#elif

#else

#endif
