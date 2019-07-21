/*************************************************************************
    > File Name: CountPrimes.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int countPrimes(int n)
		{
			int *aSieve = new int[n + 1];
			for(int i = 0; i <= n; i++)
				aSieve[i] = 0;
			int aResult = 0;
			for(int i = 2; i < n; i++)
			{
				if(aSieve[i] == 0)
				{
					++aResult;
					int aMult = 1;
					int aNum = i;
					while(aNum < n)
					{
						aSieve[aNum] = 1;
						aMult += 1;
						aNum = i *aMult;

					}
				}
			}
			return aResult;
		}
};

int main(void)
{
	return 0;
}
