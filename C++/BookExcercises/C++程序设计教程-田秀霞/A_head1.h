/*************************************************************************
    > File Name: A_head1.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

namespace head1
{
	class Student
	{
		public:
			void show()
			{
				cout<<"num:"<<num<<endl;
				cout<<"name:"<<name<<endl;
			}
			Student(){

			}
			Student(int n, string s){
				num = n; name =s;
			}
		private:
			int num;
			string name;
	};
	void fun()
	{
		cout<<"Student information."<<endl;
	}
}
