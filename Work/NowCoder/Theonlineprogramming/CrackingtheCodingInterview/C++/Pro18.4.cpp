/*************************************************************************
    > File Name: Pro18.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Count2
{
	public:
		int countNumberOf2s(int n)
		{
			int count = 0;
			int low = 0;
			int high = 0;
			int cur = 0;
			int flag = 1;

			while(n/flag != 0)
			{
				low = n - (n/flag)*flag;
				cur = (n/flag)%10;
				high = n/(flag*10);
				if(cur == 1 || cur == 0)
					count += high * flag;
				if(cur == 2)
					count += high*flag + low + 1;
				if(cur > 2)
					count += (high+1)*flag;
				flag *= 10;
			}
			return count;
		}
};


int main(void)
{
	Count2 c;
	cout<<c.countNumberOf2s(10)<<endl;

	return 0;
}
