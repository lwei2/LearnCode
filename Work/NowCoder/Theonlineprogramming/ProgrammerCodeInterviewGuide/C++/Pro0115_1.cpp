/*************************************************************************
    > File Name: Pro0115_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	char ch;
	int nAsteriskCount = 0;
	vector<char> A;
	while(cin >> ch)
	{
		if(ch == '*')
			++nAsteriskCount;
		else if(ch != '\n')
			A.emplace_back(ch);
	}
	while(nAsteriskCount--)
		cout<<'*';
	for(const char &i : A)
		cout<<i;
	cout<<endl;
	return 0;
}
