/*************************************************************************
    > File Name: Biorhythms.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int p,e,i,d,Case = 1;
	while(cin >> p >> e >> i >> d)
	{
		if(p == -1 && e == -1 && i == -1 && d == -1)
			break;
		int t = (5544*p + 14421*e + 1288*i - d  + 21252)%21252;
		if(t == 0)
			cout<<"Case "<<Case++<<": the next triple peak occurs in 21252 days." << endl;
		else
			cout<<"Case "<<Case++<<": the next triple peak occurs in "<<t<<" days."<<endl;
	}
	return 0;
}
