/*************************************************************************
    > File Name: test_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car()
	{

	}
	Car(string name, int seats);
	Car(Car &con_refcar);
	void print();
	~Car();
private:
	string m_name;
	int m_seats;
};

Car::Car(string name, int seats)
{
	m_name = name;
	m_seats = seats;
}
Car::Car(Car &con_refcar)
{
	m_name = con_refcar.m_name;
	m_seats = con_refcar.m_seats;
}
Car::~Car()
{

}
void Car::print()
{
	cout<<"name:"<<m_name<<endl;
	cout<<"seats:"<<m_seats<<endl;
}
void print_carinfo(Car carinfo)
{
	carinfo.print();
}
int main(void)
{
	Car n("LieBao",4);
	print_carinfo(n);
	return 0;
}
