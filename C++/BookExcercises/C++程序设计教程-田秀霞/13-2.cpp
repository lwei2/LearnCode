/*************************************************************************
    > File Name: 13-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

template < class T>
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

template < class T >
Student<T>::Student(T na, T s, int a)
{
	cout<<"student()"<<endl;
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
	Student<string> stu("Marry", "women", 20);
	cout<<"name:"<<stu.getName()<<endl;
	cout<<"sex:"<<stu.getSex()<<endl;
	cout<<"age:"<<stu.getAge()<<endl;
	return 0;
}
