/*************************************************************************
    > File Name: 9-2-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

static int Grades[] = {
	500,600,750,1000,1400,2000,2800,4000
};

class employee
{
	protected:
		string title;
		string name;
		int ID;
		int grade;
		double salary;
		double base_salary;
		double career_salary;
	public:
		employee(string="",string="", int=0,int=0);
		virtual void pay();
		void show();
		double getsalary()
		{
			return salary;
		}
		double getbase_salary()
		{
			return base_salary;
		}
		double getcareer_salary()
		{
			return career_salary;
		}
};

employee::employee(string tit, string nn, int id, int gr)
{
	title = tit;
	name = nn;
	ID = id;
	grade = gr;
	salary = 0;
	base_salary = 0;
	career_salary = 0;
}

void employee::show()
{
	cout<<"title:"<<title<<",name:"<<name<<",ID:"<<ID<<endl;
}

void employee::pay()
{
	int days;
	cout<<"Enter the day:"<<endl;
	cin>>days;
	base_salary = Grades[grade]*(23-days)/23;
	career_salary = base_salary/2;
	salary = base_salary+career_salary;
	cout<<"salary:"<<salary<<endl;
}

class manager : virtual public employee
{
	protected:
		double price;
		double factor;
	public:
		manager(string="", string="",int=0,int=0,double=0);
		void pay();
};

manager::manager(string tit, string nn, int id,int gr, double pr):employee(tit, nn,id,gr)
{
	price = pr;
	factor = 0;
}
void manager::pay()
{
	int days;
	cout<<"Enter the days:"<<endl;
	cin>>days;
	cout<<"Enter the factor:"<<endl;
	cin>>factor;
	base_salary = Grades[grade]*(23 - days)/23;
	career_salary = price *factor*(23-days)/23;
	salary = base_salary + career_salary;
	cout<<"salary:"<<salary<<endl;
}

class technician:virtual public employee
{
	protected:
		double hours;
		double perhour;
		double shfactor;
	public:
		technician(string="",string="",int=0,int=0,double=0);
		void pay();
};

technician::technician(string tit, string nn, int id, int gr, double phr):employee(tit,nn,id,gr)
{
	hours = 0;
	perhour = phr;
	shfactor = 0;
}

void technician::pay()
{
	int days;
	cout<<"Enter the days:"<<endl;
	cin>>days;
	cout<<"the factor:"<<endl;
	cin>>shfactor;
	hours = 8*(23-days);
	base_salary = Grades[grade]*(23-days)/23;
	career_salary = perhour*hours*shfactor*(23-days)/23;
	salary = base_salary + career_salary;
	cout<<"salary:"<<salary<<endl;
}

class developermanager : public manager, public technician
{
	public:
		developermanager(string="",string="",int id=0,int gr=0,double pr=0,double phr=0);
		void pay();
};

developermanager::developermanager(string tit, string nn, int id, int gr, double pr,double phr):manager(tit,nn,id,gr,pr),technician(tit,nn,id,gr,phr),employee(tit,nn,id,gr)
{

}
void developermanager::pay()
{
	int days;
	cout<<"Enter the days:"<<endl;
	cin>>days;
	cout<<"Enter the factor:"<<endl;
	cin>>factor;
	cout<<"Enter the shfactor"<<endl;
	cin>>shfactor;
	hours = 8*(23-days);
	base_salary = Grades[grade]*(23-days)/23;
	career_salary = perhour*hours*shfactor*(23-days)/23;
	career_salary += price*factor*(23-days)/23;
	salary = base_salary + career_salary;
	cout<<"salary:"<<salary<<endl;
}
int main(void)
{
	employee eml1("employee","zhangwei",10012,0),*emlp;
	manager mag1("manager","zhaojie",20005,4,1000);
	technician tec1("technician","wangqian",30047,5,10);
	developermanager dem1("developermanager","shenjun",50069,6,1500,12);
	eml1.show();
	eml1.pay();
	mag1.show();
	mag1.pay();
	tec1.show();
	tec1.pay();
	emlp = &dem1;
	emlp->show();
	emlp->pay();
	return 0;
}
