/*************************************************************************
    > File Name: 9-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>

using namespace std;

#define MAX 20
class Destination
{
	protected:
		char from[MAX];
		char to[MAX];
	public:
		Destination()
		{
			strcpy(from,"");
			strcpy(to,"");
		}
		Destination(char f[], char t[])
		{
			strcpy(from,f);
			strcpy(to,t);
		}
		~Destination()
		{
			cout<<"~Destination"<<endl;
		}
		void getdata()
		{
			cout<<"Send the place and get the place:";
			cin>>from>>to;
		}
		void disp()
		{
			cout<<"the tips is "<<from<<" to"<<to;
		}
};

class Time
{
	protected:
		int hour, minute, second;
		int time;
	public:
		Time()
		{
			time = 0;
		}
		Time(int t)
		{
			time = t;
		}
		~Time()
		{
			cout<<"~Time"<<endl;
		}
		void getdata()
		{
			cout<<"Enter the t/m/s";
			cin>>hour>>minute>>second;
			time = hour*3600 + minute*60+second;
		}
		void disp()
		{
			cout<<"the time is "<< time<<" s";
		}
};

class Price : public Destination, public Time
{
	double price;
	public:
		Price():Destination(),Time()
	{
		price = 0;
	}
		Price(char f[], char t[], double tt):Destination(f,t),Time(tt)
	{

	}
		~Price()
		{
			cout<<"~Price"<<endl;
		}
		void getdata()
		{
			Destination::getdata();
			Time::getdata();
			if(strcmp(from, to) == 0)
				if(time%10 == 0)
					price = (int)(time/10)*0.06;
				else
					price = ((int)(time/10)+1)*0.06;
			else
				if(time%6==0)
					price = (int)(time/6)*0.06;
				else
					price = ((int)((time)/6)+1)*0.06;
		}
		void disp()
		{
			cout<<" ";
			Destination::disp();
			Time::disp();
			cout<<"the price:"<<price<<"$"<<endl;
		}
};

int main(void)
{
	Price A;
	int i;
	for(i = 0; i < 2; i++)
	{
		A.getdata();
		cout<<"the result:"<<endl;
		A.disp();
	}
	return 0;
}
