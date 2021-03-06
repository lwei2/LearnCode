/*************************************************************************
    > File Name: HexToDec_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	string str;
	while(getline(cin,str))
	{
		if(str.length() <= 0)
			break;
		long num = 0;
		int index = 16;
		for(int i = 2; i < str.length(); ++i)
			if(str[i] >= '0' && str[i] <= '9')
				num = num*16 + (str[i] - '0');
			else			
				num = num*16 + (str[i] - 'A' + 10);
		cout<<num<<endl;
	}
	return 0;
}
