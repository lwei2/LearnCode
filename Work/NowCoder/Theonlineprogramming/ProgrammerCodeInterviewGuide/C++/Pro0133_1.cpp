/*************************************************************************
    > File Name: Pro0133_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void)
{
	string str1, str2;
	while(cin>>str1>>str2)
	{
		int a = str1.size();
		int b = str2.size();
		if(a != b)
		{
			cout<<"NO"<<endl;
			continue;
		}
		str1 = str1 + str1;
		unordered_map<string, int> hash;
		bool ans = false;
		for(int i = 0; i < a && !ans; i++)
		{
			hash[str1.substr(i,a)]++;
		}
		if(hash[str2] > 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
