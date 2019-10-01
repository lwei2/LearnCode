/*************************************************************************
    > File Name: Pro17.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Exchange
{
	public:
		vector<int> exchangeAB(vector<int> AB)
		{
			AB[0] = AB[0]^AB[1];
			AB[1] = AB[0]^AB[1];
			AB[0] = AB[0]^AB[1];
			return AB;
		}
};

int main(void)
{
	return 0;
}
