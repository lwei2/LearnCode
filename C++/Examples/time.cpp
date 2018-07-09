#include <iostream>

using namespace std;

void Time(int hours, int minutes)
{
	if(hours < 0 || hours > 12)
	{
		cout<<"非法小时"<<endl;
	}
	if(minutes < 0 || minutes > 59)
	{
		cout<<"非法分钟"<<endl;
	}
	cout<<"Time:"<<hours<<":"<<minutes<<endl;
}

int main(void)
{
	int hours,minutes;
	cout<<"Enter the number of hours:";
	cin>>hours;
	cout<<"Enter the number of minutes:";
	cin>>minutes;
	Time(hours,minutes);
	return 0;
}
