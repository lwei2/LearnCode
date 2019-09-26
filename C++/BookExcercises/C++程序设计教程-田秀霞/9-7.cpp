/*************************************************************************
    > File Name: 9-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Fan
{
	protected:
		int flag, power;
	public:
		Fan(int p)
		{
			power = p;
			flag = 0;
			cout<<"call the construction!"<<endl;
		}
		void on()
		{
			flag = 1;
			cout<<"open the fan"<<endl;
		}
		void off()
		{
			flag = 0;
			cout<<"close the fan"<<endl;
		}
		void print()
		{
			cout<<"fan p:"<<power<<endl;
			if(flag)
				cout<<"fan open:"<<endl;
			else
				cout<<"fan close"<<endl;
		}
};
class Lamp
{
	protected:
		int flag, power;
	public:
		Lamp(int p)
		{
			power = p;
			flag =0;
			cout<<"call the construct！"<<endl;
		}
		void on()
		{
			flag = 1;
			cout<<"open Lamp"<<endl;
		}
		void off()
		{
			flag = 0;
			cout<<"close Lamp"<<endl;
		}
		void print()
		{
			cout<<"the Lamp p:"<<power<<endl;
			if(flag)
				cout<<"open Lamp:"<<endl;
			else
				cout<<"close Lamp:"<<endl;
		}
};
class Producer
{
	protected:
		long phone;
	public:
		Producer(long p)
		{
			phone = p;
			cout<<"call the P construction!"<<endl;
		}
		long get()
		{
			return phone;
		}

};
class FanLamp:public Fan, public Lamp
{
	private:
		float price;
		Producer maker;
	public:
		FanLamp(int p1, int p2, long ph, float pr):Lamp(p2),Fan(p1),maker(ph)
		{
			price = pr;
			cout<<"call the FL construction!"<<endl;
		}
		void print()
		{
			Fan::print();
			Lamp::print();
			cout<<"the phone:"<<maker.get()<<endl;
		}
};
int main(void)
{
	FanLamp f(70,40,84646961,120);
	f.Lamp::on();
	f.Lamp::off();
	f.Fan::on();
	f.Fan::off();
	f.print();
	return 0;
}
