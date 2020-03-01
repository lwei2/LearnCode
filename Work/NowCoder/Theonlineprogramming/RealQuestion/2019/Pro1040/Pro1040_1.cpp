/*************************************************************************
    > File Name: Pro1040_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

int cal(vector<int> v, int H)
{
	if(v.empty() || H <= 0)
		return 0;
	int speed = 0, sum = 0;
	int len = v.size();
	for(int i = 0; i < len; i++)
		sum += v[i];
	speed = sum/H;
	int hour;
	while(1)
	{
		hour = 0;
		for(int j = 0; j < len; j++)
		{
			hour += v[j]/speed;
			if(v[j]%speed)
				hour++;
		}
		if(hour>H)
			speed++;
		else
			break;
	}
	return speed;
}


int main(void)
{
	vector<int> v;
	int num, H;
	while(true)
	{
		cin>>num;
		v.push_back(num);
		if(cin.get() == '\n')
			break;
	}
	cin>>H;
	int min = cal(v,H);
	cout<<min<<endl;
	return 0;
}
