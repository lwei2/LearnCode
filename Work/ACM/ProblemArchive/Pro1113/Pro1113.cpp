/*************************************************************************
    > File Name: Pro1113.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;


int main(void)
{
	set<string> s;
	set<string>::iterator it;
	string str;
	int cnt = 0;
	while(cin>>str)
	{
		if(str == "XXXXXX")
		{
			cnt++;
			continue;
		}
		if(cnt == 0)
			s.insert(str);
		if(cnt == 2)
			break;
		if(cnt == 1)
		{
			bool flag = 0;
			sort(str.begin(), str.end());
			do{
				it = s.find(str);
				if(it != s.end())
				{
					cout<<str<<endl;
					flag = 1;
				}
			}while(next_permutation(str.begin(), str.end()));
			if(!flag)
				cout<<"NOT A VALID WORD\n";
			cout<<"******\n";
		}
	}
	return 0;
}
