/*************************************************************************
    > File Name: Pro0086_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin>>str;
	int loc = 0;
	while(loc < str.length())
	{
		bool isre = true;
		for(int i = 0, end = str.length() - 1; loc + i < end; i++, end--)
		{
			if(str[loc+i] != str[end])
			{
				isre = false;
				break;
			}
		}
		if(isre == true)
			break;
		loc++;
	}
	for(int i = loc - 1; i >= 0; i--)
		cout<<str[i];
	cout<<endl;
	return 0;
}
