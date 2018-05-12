/*************************************************************************
    > File Name: friendfunction.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#include<iostream>

using namespace std;

class Clock
{
	public:
	  Clock(int h=0,int m=0,int s=0);
	  friend void ShowTime(Clock&);
	private:
	  int hour,minute,second;
};
Clock::Clock(int h,int m,int s)
{
	hour =h;
	minute =m;
	second =s;
}
void ShowTime(Clock &t)
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
}
int main(void)
{
	Clock myClock(15,23);
	ShowTime(myClock);
	return 0;
}
