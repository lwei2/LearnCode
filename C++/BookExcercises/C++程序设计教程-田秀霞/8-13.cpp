/*************************************************************************
    > File Name: 8-13.cpp
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
		int totalStu();
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
	cout<<"请输入第"<<count<<"个学生的名字:";
	cin>>name;
	cout<<"请输入学号:";
	cin>>stuNum;
	cout<<"请输入性别:";
	cin>>sex;
}
Student::~Student()
{
	count--;
}
void Student::output()
{
	cout<<"姓名:"<<name<<endl;
	cout<<"学号:"<<stuNum<<endl;
	cout<<"性别:"<<sex<<endl;	
}
int Student::totalStu()
{
	return count;
}
int main(void)
{
	Student a1,a2,a3;
	cout<<"三个学生对象生成之后,";
	cout<<"当前的学生总人数为:"<<a1.totalStu()<<endl;
	a2.~Student();
	cout<<"释放第二个对象之后,";
	cout<<"当前的学生总人数为:"<<a1.totalStu()<<endl;
	return 0;
}
