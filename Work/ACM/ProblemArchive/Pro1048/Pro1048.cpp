/*************************************************************************
    > File Name: Pro1048.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string s;
	while(getline(cin,s) && s.compare("ENDOFINPUT")!=0)
	{
		if(s.compare("START")!=0 && s.compare("END")!=0)
		{
			for(int i = 0; i < s.length(); i++)
			{
				if(s[i] >= 'F' && s[i] <= 'Z')
					s[i] -= 5;
				else if(s[i] >= 'A' && s[i] <= 'E')
					s[i] += 21;
				cout<<s[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
