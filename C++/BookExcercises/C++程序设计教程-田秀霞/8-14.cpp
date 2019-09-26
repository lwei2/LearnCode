/*************************************************************************
    > File Name: 8-14.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Student
{
	public:
		Student();
		~Student();
		void output();
		static int totalStu();
	private:
		int stuNum;
		char name[20];
		char sex[3];
		static int count;
};
int Student::count = 0;
Student::Student()
{
	count++;
	cout<<"请输入第"<<count<<"个学生的姓名:"<<Student::totalStu()<<endl;
	cout<<name;
	cout<<"请输入学号:";
	cout<<stuNum;
	cout<<"请输入性别:";
	cout<<sex;
}
int Student::totalStu()
{
	return count;
}
Student::~Student()
{
	count--;
}
void Student::output()
{
	cout<<name<<endl;
	cout<<stuNum<<endl;
	cout<<sex<<endl;

}
int main(void)
{
	cout<<"Sum:"<<Student::totalStu()<<endl;
	Student a1, a2, a3;
	cout<<Student::totalStu()<<endl;
	a2.~Student();
	cout<<Student::totalStu()<<endl;
	return 0;
}
