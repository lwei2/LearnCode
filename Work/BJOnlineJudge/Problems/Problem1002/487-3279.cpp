/*************************************************************************
    > File Name: 487-3279.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdlib>
#include <string.h>
#include <algorithm>

using namespace std;

int sign[10000000];

class Solution
{
	public:
		void Problem1002(int n)
		{
			while(n--)
			{
				char str[1024];
				cin>>str;
				int sum = 0;
				for(int i = 0; i < strlen(str); i++)
				{
					int temp = 0;
					switch(str[i])
					{
						case 'A':
						case 'B':
						case 'C':
						case '2':
							temp = 2;
							sum = 10*sum + temp;
							break;
						case 'D':
						case 'E':
						case 'F':
						case '3':
							temp = 3;
							sum = 10*sum + temp;
							break;

						case 'I':
						case 'G':
						case 'H':
						case '4':
							temp = 4;
							sum = 10*sum + temp;
							break;
						case 'J':
						case 'K':
						case 'L':
						case '5':
							temp = 5;
							sum = 10*sum + temp;
							break;
						case 'O':
						case 'M':
						case 'N':
						case '6':
							temp = 6;
							sum = 10*sum + temp;
							break;
						case 'P':
						case 'R':
						case 'S':
						case '7':
							temp = 7;
							sum = 10*sum + temp;
							break;
						case 'T':
						case 'U':
						case 'V':
						case '8':
							temp = 8;
							sum = 10*sum + temp;
							break;
						case 'W':
						case 'X':
						case 'Y':
						case '9':
							temp = 9;
							sum = 10*sum + temp;
							break;
						case '1':
							temp = 1;
							sum = 10*sum + temp;
							break;
						case '0':
							temp = 0;
							sum = 10*sum + temp;
							break;
						default:
							break;
					}
				}
				sign[sum]++;
			}

		int count = 0;
		for(int i = 0; i < 10000000; i++)
		{
			if(sign[i]!=0 && sign[i]!=1)
			{
				int j = i;
				printf("%03d",j/10000);
				j = j%10000;
				printf("-%04d",j);
				printf(" %d\n",sign[i]);
				count++;
			}
		}
		if(count == 0)
			cout<<"No duplicates."<<endl;
	}
};

int main(void)
{

	int n;
	cin>>n;
	memset(sign, 0, sizeof(sign));
	Solution s;
	s.Problem1002(n);
	return 0;
}
