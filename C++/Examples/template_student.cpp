/*************************************************************************
    > File Name: template_student.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

template<class T>
class Student
{
	public:
	  Student(T na, T s, int a);
	  int getAge();
	  T getSex();
	  T getName();
	private:
	  T name;
	  T sex;
	  int age;
};

template<class T>
Student<T>::Student(T na, T s, int a)
{
	cout<<"construct function"<<endl;
	name = na;
	sex = s;
	age = a;
}
template<class T>
int Student<T>::getAge()
{
	return age;
}
template<class T>
T Student<T>::getName()
{
	return name;
}
template<class T>
T Student<T>::getSex()
{
	return sex;
}

int main(void)
{
  	Student<string> std("Tom", "man", 25);
	cout<<"name:"<<std.getName()<<endl;
	cout<<"sex:"<<std.getSex()<<endl;
	cout<<"age:"<<std.getAge()<<endl;

	return 0;
}
