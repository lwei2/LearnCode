/*************************************************************************
    > File Name: test_0001.cpp
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
int main(void)
{
	Car c("LieBao",4);
	Car c1(c);
	return 0;
}
