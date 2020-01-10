/*************************************************************************
    > File Name: test_0016.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int rows, count = 0, count1 = 0, k = 0;
	cin>>rows;
	for(int i = 1; i <= rows; ++i)
	{
		for(int j = 1; j <= rows - i; ++j)
		{
			cout<< "  ";
			++count;
		}
		while(k != 2*i - 1)
		{
			if(count <= rows - 1)
			{
				cout<<i + k<< " ";
				++count;
			}
			else
			{
				++count1;
				cout<<i + k - 2*count1<< " ";
			}
			++k;
		}
		count1 = count = k = 0;
		cout<<endl;
	}
	return 0;
}
