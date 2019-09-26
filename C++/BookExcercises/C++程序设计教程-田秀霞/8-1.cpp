/*************************************************************************
    > File Name: 8-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Clock
{
public:
	void SetTime(int h = 0, int m = 0, int s = 0);
	void ShowTime()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
private:
	int hour, minute, second;
};
void Clock::SetTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

int main(void)
{
	Clock myClock;
	cout<<"first time set and output:"<<endl;
	myClock.SetTime();
	myClock.ShowTime();
	cout<<"second time set and output:"<<endl;
	myClock.SetTime(8,30,45);
	myClock.ShowTime();
	return 0;
}

