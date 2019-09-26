/*************************************************************************
    > File Name: 10-9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

class String
{
	public:
		String(char *s="")
		{
			int len =strlen(s);
			str = new char[len+1];
			strcpy(str,s);
		}
		~String()
		{
			delete[]str;
		}
		String& operator=(String &s)
		{
			if(this == &s)
			{
				delete[]str;
				int len = strlen(s.str);
				str = new char[len+1];
				strcpy(str,s.str);
			}
			return *this;
		}
		void display()
		{
			cout<<str<<endl;
		}
	private:
		char *str;
};
int main(void)
{
	String s("Welcome to my world");
	String s1 = s;
	s1.display();
	String s2 = s;
//	s2 = s1;
	cout<<"s2 == s1"<<endl;
	cout<<"s1:";
	s1.display();
	cout<<"s2:";
	s2.display();

	return 0;
}
