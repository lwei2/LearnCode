/*************************************************************************
    > File Name: B_head2.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

namespace head2
{
	class Student
	{
		private:
			int num;
			string name;
			float price;
		public:
			Student(int n, string nam, float p)
			{
				num = n;
				name = nam;
				price = p;
			}
			void show();
	};
	void Student::show()
	{
		cout<<"booknum:"<<num<<endl;
		cout<<"booname:"<<name<<endl;
	}
	void fun()
	{
		cout<<"Student's book information!"<<endl;
	}
}
