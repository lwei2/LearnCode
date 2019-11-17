/*************************************************************************
    > File Name: 12-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
	int code;
	char day[20];
	char coursename[20];
	char name[20];
	int style1;
	int style2;
	int style3;
	int style4;
};



int main(void)
{
	student st[5]={
		8,"2009.10.11","多媒体","Candy",2,3,0,9,
		10,"2009.10.12","维护代码","Ludy",3,7,0,1,
		3,"2009.10.12","C++程序设计","Ina",0,6,3,2,
		5,"2009.10.11","多媒体","Lindy",6,2,9,0,
		9,"2009.10.10","C++程序设计","Nancy",1,8,5,3,

	};
	fstream iofile;
	iofile.open("stud.txt", ios::out|ios::binary);
	int i, m;
	cout<<"录入学生考勤情况:"<<endl;
	for(i = 0; i <5; i++)
	{
		cout<<"学生学号:"<<st[i].code<<endl;
		cout<<"旷课日期:"<<st[i].day<<endl;
		cout<<"课程名:"<<st[i].coursename<<endl;
		cout<<"学生名:"<<st[i].name<<endl;
		cout<<"一周迟到:"<<st[i].style1<<endl;
		cout<<"一周早退:"<<st[i].style2<<endl;
		cout<<"一周请假:"<<st[i].style3<<endl;
		cout<<"一周旷课:"<<st[i].style4<<endl;
		cout<<endl;
		iofile.write((char*)&st[i],sizeof(st[i]));
	}
	bool find;
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"学号："<<endl;
	cin>>m;
LABELQUERY:
	try{
		find = false;
		while(find)
		{
			iofile.seekg(0, ios::beg);
			iofile.read((char*)&st[i],sizeof(st[i]));
			for(i = 0; i < 5; i++)
			{
				if(m == st[i].code)
				{
					cout<<"学生学号:"<<st[i].code<<endl;
					cout<<"旷课日期:"<<st[i].day<<endl;
					cout<<"课程名:"<<st[i].coursename<<endl;
					cout<<"学生名:"<<st[i].name<<endl;
					cout<<"一周迟到:"<<st[i].style1<<endl;
					cout<<"一周早退:"<<st[i].style2<<endl;
					cout<<"一周请假:"<<st[i].style3<<endl;
					cout<<"一周旷课:"<<st[i].style4<<endl;
					cout<<"Enter!"<<endl;
					find=true;
					exit(1);
				}
			}
			throw(-1);
		}
	}
	catch(int)
	{
		cout<<"记录不存在!"<<endl;
		cout<<"请重新输入!"<<endl;
		cin>>m;
		if(m)
			goto LABELQUERY;
	}
	iofile.close();
	getchar();
	return 0;
}
