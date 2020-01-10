/*************************************************************************
    > File Name: test_0020.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

int main(void)
{
	int a,b;
	int MAX, MIN,i;
	cin>>a>>b;
	cout<<typeid(a).name()<<setw(6)<<typeid(b).name()<<endl;
	MAX=a ? b : a,b;
	if(a == MAX)
		MIN = b;
	else
		MIN = a;
	for(i = MIN; i > 1; i--)
	{
		if((MAX%i == 0) && (MIN%i == 0))
			break;
		else
			continue;
	}
	cout<<"最大公约数:"<<i<<endl;
	cout<<"最小公倍数:"<<(a*b)/i;
	return 0;
}
