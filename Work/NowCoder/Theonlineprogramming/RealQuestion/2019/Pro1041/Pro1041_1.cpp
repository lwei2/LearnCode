/*************************************************************************
    > File Name: Pro1041_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,num,tmp;
	bool flag1, flag2;
	int ant = 0;
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		num = i;
		flag1 = 0;
		flag2 = 0;
		while(num)
		{
			tmp = num%10;
			num/= 10;
			if(tmp == 3 || tmp == 4 || tmp == 7)
			{
				flag2 = 1;
				break;
			}
			else if(tmp == 2 || tmp == 5 || tmp == 6 || tmp == 9)
				flag1 = 1;
		}
		if(flag1 == 1 && flag2 == 0)
			ant++;
	}
	cout<<ant<<endl;
	return 0;
}
