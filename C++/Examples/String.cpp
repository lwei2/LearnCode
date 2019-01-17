/*************************************************************************
    > File Name: String.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class String
{
	public:
		char *str;
		String():str(new char[1])
		{
			str[0] = 0;
		}	
		String(const char *s)
		{
			str = new char[strlen(s)+1];
			strcpy(str,s);
		}
		String(const String &s)
		{
			cout<<"copy constructor called"<<endl;
			str=new char[strlen(s.str)+1];
			strcpy(str,s.str);
		}
		String& operator=(const String &s)
		{
			cout<<"copy operator=called"<<endl;
			if(str!=s.str)
			{
				delete[]str;
				str = new char[strlen(s.str)+1];
				strcpy(str,s.str);
			}
			return *this;
		}
		String(String && s):str(s.str)
		{
			cout<<" move constructor called"<<endl;
			s.str = new char[1];
			s.str[0] = 0;
		}
		String &operator=( String && s)
		{
			cout<<"move operator=called"<<endl;
			if(str!=s.str)
			{
				str = s.str;
				s.str = new char[1];
				s.str[0] = 0;
			}
			return *this;
		}
		~String()
		{
			delete[]str;
		}
};
template<class T>
void MoveSwap(T &a, T &b)
{
	T tmp(move(a));
	a = move(b);
	b = move(tmp);
}
int main(void)
{
	String s;
	s = String("this");
	cout<<"========"<<endl;
	String s1 = "hello",s2 = "world";
	MoveSwap(s1,s2);
	cout<<s2.str<<endl;

	return 0;
}


