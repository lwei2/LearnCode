/*************************************************************************
    > File Name: Pro1058.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int f[5843];

int min(int a, int b, int c, int d)
{
	int m = min(min(a,b),min(c,d));
	return m;
}

int main(void)
{
	int a, b, c, d;
	a = b = c = d = 1;
	f[1] = 1;
	for(int i = 2; i <= 5843; i++)
	{
		f[i] = min(f[a]*2, f[b]*3, f[c]*5, f[d]*7);
		if(f[i] == f[a]*2)
			a++;
		if(f[i] == f[b]*3)
			b++;
		if(f[i] == f[c]*5)
			c++;
		if(f[i] == f[d]*7)
			d++;
	}
	int n;
	while(cin>>n && n)
	{
		if(n%10 == 1 && n%100!=11)
			cout<<"The "<<n<<"st humble number is "<<f[n]<<"."<<endl;
		else if(n%10==2&& n%100!=12)
			cout<<"The "<<n<<"nd humble number is "<<f[n]<<"."<<endl;
		else if(n%10==3&& n%100!=13)
			cout<<"The "<<n<<"rd humble number is "<<f[n]<<"."<<endl;
		else
			cout<<"The "<<n<<"th humble number is "<<f[n]<<"."<<endl;
	}
	return 0;
}
