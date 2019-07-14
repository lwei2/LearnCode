/*************************************************************************
    > File Name: Pro1088.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int len;
	string word;
	int count = 0;
	while(cin>>word)
	{
		if(word == "<br>")
		{
			count = 0;
			cout<<endl;
		}
		else if(word == "<hr>")
		{
			if(count > 0)
			{
				cout<<endl;
				count = 0;
			}
			cout << "--------------------------------------------------------------------------------" << endl;
		}
		else
		{
			len = word.length();
			count += len;
			if(count + 1 > 80)
			{
				cout<<endl<<word;
				count = len;
			}
			else
			{
				if(count > len)
				{
					cout<<' ';
				}
				cout<<word;
				count++;
			}
		}
	}
	cout<<endl;
	return 0;
}
