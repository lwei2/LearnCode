/*************************************************************************
    > File Name: FindTheChar.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void)
{
	char str[512],ch;
	int i,count = 0;
	int length = 0;
	cin.getline(str,512);
	cin.get(ch);
	length=strlen(str);
	
	change(str);
	if((ch >= 'a' && ch <= 'z')||(ch >= 'A' || ch <= 'Z'))
	{
		if(ch>='a'&&ch<='z')
		  ch = ch - 32;
		for(i = 0;i < length; i++)
		{
			if(str[i] == ch)
			  count ++;
		}
	}
	else
	{
		for(i = 0; i<length; i++)
		  if(str[i] ==ch)
			count ++;
	}
	cout<<count<<endl;
  	return 0;
}
