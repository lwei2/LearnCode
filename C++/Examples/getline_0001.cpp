/*************************************************************************
    > File Name: getline_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	cout<<"Type the letter 'a':";
	ws(cin);
	char c[10] = {'\0'};
	cin.getline(c, 10, '#');
	cout<<c<<endl;
	char ch = cin.get();
	cout<<"ch="<<ch<<endl;
	if('\n' == ch)
	{
		cout<<"ch equals a new line operator"<<endl;
	}
	char ch2 = cin.get();
	cout<<"ch2="<<ch2;
	cin.get(c,10);
	cout<<c<<endl;
	cout<<cin.readsome(c,4)<<endl;
	cout<<c<<endl;
	cout<<cin.gcount()<<endl;
	return 0;
}
