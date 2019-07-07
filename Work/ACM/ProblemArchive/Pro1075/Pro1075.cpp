/*************************************************************************
    > File Name: Pro1075.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>

using namespace std;


map<string, string> m;
int main(void)
{
	string start, tmp;
	cin>>start;
	while(cin>>start && start!="END")
	{
		cin>>tmp;
		m[tmp] = start;
	}
	cin>>start;
	getchar();
	string a = "";
	while(getline(cin,start) && start != "END")
	{
		int index = 0;
		for(int i = 0; i < start.size(); i++)
		{
			if(islower(start[i]))
				a += start[i];
			else
			{

				if(m.find(a) != m.end())
					cout<<m[a];
				else
					cout<<a;
				a = "";
				printf("%c",start[i]);
			}			
		}
		cout<<endl;
	}
	return 0;
}

