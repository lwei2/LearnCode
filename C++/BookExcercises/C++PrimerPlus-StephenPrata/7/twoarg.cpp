/*************************************************************************
    > File Name: twoarg.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

void n_chars(char, int);



int main(void)
{
	int times;
	char ch;
	cout<<"Enter a character:"<<endl;
	cin>>ch;
	while(ch != 'q')
	{
		cout<<"Enter a N:";
		cin>>times;
		n_chars(ch,times);
		cout<<"\nEnter another character or press q-key to quit:"<<endl;
		cin>>ch;
	}
	cout<<"The value of times is "<<times<<endl;
	cout<<"Bye\n";
	
	return 0;
}

void n_chars(char c, int n)
{
	while(n-- > 0)
		cout<<c;
}
